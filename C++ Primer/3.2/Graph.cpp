#include "Graph.hpp"

Node::Node(const std::string &name)
{
   this->name = name;
   cost = INF;
}

void Node::addNeighbor(const std::string &name,long long cost)
{
    neighbors.push_back({name,cost});
}

void Node::displayNeighbors()
{
    if(cost == INF)
    {
        std::cout << "{" << name << " INF"<< "}" << " : ";
    }
    else
    {
        std::cout << "{" << name << " " << cost << "}" << " : ";
    }

    for(auto i = neighbors.begin();i != neighbors.end();i++)
    {
        std::cout << "{"<< i->first << " " << i->second << "}" << " ";
    }
    std::cout << std::endl;
}


Graph::Graph()
{

}

void Graph::addEdge(const std::string &source,const std::string &destination,long long cost)
{
    if(adjList.empty())
    {
        Node *src = new Node(source);
        Node *dest = new Node(destination);

        src->addNeighbor(destination,cost);
        dest->addNeighbor(source,cost);

        adjList.push_back(src);
        adjList.push_back(dest);
    }
    else
    {
        bool srcFound = false,destFound = false;
        Node *src = nullptr,*dest = nullptr;

        for(auto i = adjList.begin();i != adjList.end();i++)
        {
            if((*i)->name == source)
            {
                srcFound = true;
                src = *i;
                continue;
            }
            if((*i)-> name == destination)
            {
                destFound = true;
                dest = *i;
                continue;
            }
        }

        if(srcFound)
        {
            src->addNeighbor(destination,cost);
            if(!destFound)
            {
                dest = new Node(destination);
                dest->addNeighbor(source,cost);
                adjList.push_back(dest);
            }
        }
        else
        {
            src->addNeighbor(destination,cost);
            adjList.push_back(src);
        }

        if(destFound)
        {
            dest->addNeighbor(source,cost);
        }
    }
}

void Graph::displayAdjList()
{
    if(adjList.empty())
    {
        std::cout << "There are no nodes in the Graph!!!" << std::endl;
    }
    else
    {
        std::cout << "Your Graph : " << std::endl;
        for(auto i = adjList.begin();i != adjList.end();i++)
        {
            (*i)->displayNeighbors();
        }
    }
}