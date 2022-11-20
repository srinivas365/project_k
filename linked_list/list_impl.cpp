#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
  LinkedList list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(10);
  list.push_front(110);
  list.push_front(200);
  list.print();
  list.pop_front();
  cout << "Popping last element:"<<list.pop_back()<<endl;
  list.print();
  list.reverse();
  cout<<"after reversing"<<endl;
  list.print();
  cout<<"110 present at index:"<<list.search(110)<<endl;
}