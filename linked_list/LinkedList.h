#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

class LinkedList
{
public:
  Node *head;
  Node *tail;
  LinkedList()
  {
    head = NULL;
    tail = NULL;
  }
  void push_back(int data)
  {
    if (head == NULL)
    {
      Node *temp = new Node(data);
      head = temp;
      tail = temp;
    }
    else
    {
      Node *temp = new Node(data);
      tail->next = temp;
      tail = temp;
    }
  }
  void push_front(int data)
  {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
  }
  int pop_back()
  {
    if (head != NULL)
    {
      Node *temp = head;
      while (temp->next != tail)
      {
        temp = temp->next;
      }
      Node *last = temp->next;
      tail = temp;
      tail->next = NULL;
      return last->data;
    }
    return NULL;
  }
  int pop_front()
  {
    if (head != NULL)
    {
      Node *temp = head;
      head = head->next;
      return temp->data;
    }
    return NULL;
  }
  void print()
  {
    Node *temp = head;
    while (temp)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << endl;
  }
  int front()
  {
    return head->data;
  }
  int back()
  {
    return tail->data;
  }

  void reverse()
  {
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
      Node *temp = curr->next;
      curr->next = prev;
      prev = curr;
      curr = temp;
    }
    tail = head;
    head = prev;
  }
  int search(int x){
    Node *temp = head;
    int idx = 0;
    while(temp!=NULL){
      if(temp->data == x){
        return idx;
      }
      temp = temp->next;
      idx++;
    }
    return -1;
  }
};