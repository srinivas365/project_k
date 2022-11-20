#include<iostream>
#include "Queue.h"
using namespace std;

int main(){
  MyQueue q;
  q.push(10);
  q.push(20);
  q.push(37);
  q.print();
  cout << "popped element:" << q.pop() << endl;
  q.print();
  int n = 5;
  int *arr = new int[5];
}