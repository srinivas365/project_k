#include<iostream>
#include "BTree.h"
using namespace std;

int main(){
  BTree btree;
  btree.insert(10);
  btree.insert(2);
  btree.insert(1);
  btree.insert(5);
  btree.insert(15);
  btree.insert(11);
  btree.insert(12);
  btree.insert(17);
  btree.printInOrder();
  btree.printPreOrder();
  btree.printPostOrder();
}