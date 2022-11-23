#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;

class Node{
public:
  string name;
  list<string> nbrs;
  Node(string name){
    this->name = name;
  }
};

class GraphS{
public:
  unordered_map<string,Node*> graph;
  void addVertices(vector<string> vertices){
    for(string vertex: vertices){
      graph[vertex] = new Node(vertex);
    }
  }
  void addEdge(string x, string y, bool undirected=true){
    graph[x]->nbrs.push_back(y);
    if(undirected){
      graph[y]->nbrs.push_back(x);
    }
  }
  void print(){
    for(auto cityPairs:graph){
      cout << cityPairs.first << "->";
      Node *nbrPtr = cityPairs.second;
      for(auto nbr:nbrPtr->nbrs){
        cout << nbr <<",";
      }
      cout << endl;
    }
  }
};