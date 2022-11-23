#include<iostream>
#include "Graph.h"
#include "GraphS.h"
using namespace std;

int main(){
  Graphu graph(5);
  graph.addEdge(0,1);
  graph.addEdge(0,2);
  graph.addEdge(0,3);
  graph.addEdge(1,3);
  graph.addEdge(1,4);
  graph.addEdge(2,3);
  graph.print();
  cout << "Breadth first search"<< endl; 
  graph.bfs(1);
  cout << "Depth first search"<< endl; 
  graph.dfs(1);

  GraphS city_graph;
  city_graph.addVertices({"mum","hyd","del","bang"});
  city_graph.addEdge("mum","del");
  city_graph.addEdge("mum","hyd");
  city_graph.addEdge("mum","bang");
  city_graph.print();
  
}