#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;
  Node(int data){
    this->data = data;
    next = NULL;
  }
};

class Stacku{
public:
  Node *head;
  Stacku(){
    head = NULL;
  }
  void push(int data){
    // LIFO last in first out
    if(head == NULL){
      head = new Node(data);
    }else{
      Node *temp = new Node(data);
      temp->next = head;
      head = temp;
    }
  }
  int pop(){
    if(head!=NULL){
      int data = head->data;
      head = head->next;
      return data;
    }
    return NULL;
  }
  void print(){
    Node *temp = head;
    while(temp!=NULL){
      cout << temp->data << ",";
      temp = temp->next;
    }
    cout << endl;
  }
};