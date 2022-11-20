#include<iostream>
#include "Heapu.h"
using namespace std;

int main(){
  Heap hp;
  hp.push(10);
  hp.push(100);
  hp.push(20);
  hp.push(200);
  hp.print();
  
  hp.pop();
  hp.print();
}