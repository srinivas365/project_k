#include<iostream>
using namespace std;

// First in first out
class Node{
public:
  int data;
  Node *next;
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};

class MyQueue{
public:
  Node *head;
  Node *tail;
  MyQueue(){
    head = NULL;
  }
  void push(int data){
    Node *temp = new Node(data);
    if(head==NULL){
      head = temp;
      tail = temp;
    }else{
      tail->next = temp;
      tail = temp;
    }
  }
  void print(){
    Node *temp = head;
    while(temp!=NULL){
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << endl;
  }
  int pop(){
    if(head!=NULL){
      int data = head->data;
      head = head->next;
      return data;
    }
    return NULL;
  }
};