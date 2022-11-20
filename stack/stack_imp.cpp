#include<iostream>
#include "Stack.h"

int main(){
  Stacku stack;
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.print();
  stack.pop();
  stack.print();
}