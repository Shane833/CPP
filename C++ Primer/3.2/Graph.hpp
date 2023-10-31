#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <list>
#include <map>

#define INF 10000000000

class Node
{
    public:
        Node(const std::string &name);
        void addNeighbor(const std::string &name,long long cost);
        void displayNeighbors();

        std::string name;
        long long cost;
        std::list<std::pair<std::string,int>> neighbors;
};

class Graph
{
    public:
        Graph();
        void addEdge(const std::string &source,const std::string &destination,long long cost);
        void displayAdjList();

        std::list<Node *> adjList;
};

#endif