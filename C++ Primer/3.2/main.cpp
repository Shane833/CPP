#include "Graph.hpp"

void Dijkstra(Graph g,const std::string &source)
{
	Node *src = nullptr;

	for(auto i  = g.adjList.begin();i != g.adjList.end();i++)
	{
		if((*i)->name == source)
		{
			src = *i;
			break;
		}
	}

	if(src != nullptr)
	{
		src->cost = 0; // Initializing cost to reach this node to be zero
		std::map<std::string,int> updated_costs; // List to store the minimum 
		std::map<std::string,bool> visited;

		for(auto i = g.adjList.begin();i != g.adjList.end();i++)
		{
			visited.insert({(*i)->name,false});
		}

		while(updated_costs.size() != g.adjList.size())
		{
			if(!visited[src->name])
			{
				
				for(auto b = src->neighbors.begin();b != src->neighbors.end();b++)
				{	
					if(!visited[b->first])
					{
						if(src->cost + b->second < )
					}
				}	
			}
			else
			{
			
			}
			break;
		}
	}
	else
	{
		std::cout << "Invalid Source Node!!!" << std::endl;
	}
}

int main(int argc,char *argv[])
{
   Graph g;
   g.addEdge("A","B",4);
   g.addEdge("A","C",8);
   g.addEdge("B","C",11);
   g.addEdge("B","F",8);
   g.addEdge("C","D",7);
   g.addEdge("C","E",1);
   g.addEdge("F","D",2);
   g.addEdge("D","E",6);
   g.addEdge("F","H",7);
   g.addEdge("F","G",4);
   g.addEdge("E","G",2);
   g.addEdge("H","I",9);
   g.addEdge("G","I",10);
   g.displayAdjList();

   Dijkstra(&g,"A");

}