#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graphu
{
public:
  list<int> *l;
  int v;
  Graphu(int v)
  {
    this->v = v;
    l = new list<int>[v];
  }
  void addEdge(int i, int j, bool undirected = true)
  {
    l[i].push_back(j);
    if (undirected)
    {
      l[j].push_back(i);
    }
  }
  void print()
  {
    for (int i = 0; i < v; i++)
    {
      cout << i << ":";
      for (int x : l[i])
      {
        cout << x << ",";
      }
      cout << endl;
    }
  }
  void bfs(int src)
  {
    queue<int> q;
    bool *visited = new bool[v]{0};
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
      int node = q.front();
      cout << node << endl;
      q.pop();
      for (auto nbr : l[node])
      {
        if (visited[nbr] != true)
        {
          q.push(nbr);
          visited[nbr] = true;
        }
      }
    }
  }
  void dfsHelper(int src, bool *visit)
  {
    visit[src] = true;
    cout << src << endl;
    for (auto nbr : l[src])
    {
      if (!visit[nbr])
      {
        dfsHelper(nbr, visit);
      }
    }
  }
  void dfs(int src)
  {
    bool *visit = new bool[v]{0};
    dfsHelper(src,visit);
  }
};