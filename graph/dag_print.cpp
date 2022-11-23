#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Dag{
public:
  int v;
  list<int> *nbrs;
  int *indegree;
  Dag(int v){
    this->v = v;
    nbrs = new list<int>[v];
    indegree = new int[v]{0};
  }
  void addEdge(int i, int j){
    nbrs[i].push_back(j);
    indegree[j]++;
  }
  void print(){
    queue<int> q;
    for(int i=0;i<v;i++){
      if(indegree[i]==0){
        q.push(i);
      }
    }
    while(!q.empty()){
      int x = q.front();
      cout << x << endl;
      q.pop();
      for(int nbr: nbrs[x]){
        indegree[nbr]--;
        if(indegree[nbr]==0){
          q.push(nbr);
        }
      }
    }
  }
};