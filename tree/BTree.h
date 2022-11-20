#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

class BTree{
private:
  Node* insertHelper(Node *node,int data){
    if(node==NULL){
      return new Node(data);
    }else if(node->data >= data){
      node->left = insertHelper(node->left,data);
    }else{
      node->right = insertHelper(node->right,data);
    }
    return node;
  }
  void printInOrderHelper(Node* root){
    if(root==NULL){
      return;
    }
    printInOrderHelper(root->left);
    cout << root->data << ",";
    printInOrderHelper(root->right);
  }
  void printPreOrderHelper(Node *root){
    if(root==NULL){
      return;
    }
    cout << root->data << ",";
    printPreOrderHelper(root->left);
    printPreOrderHelper(root->right);
  }
  void printPostOrderHelper(Node *root){
    if(root==NULL){
      return;
    }
    printPostOrderHelper(root->left);
    printPostOrderHelper(root->right);
    cout << root->data << ",";
  }

public:
  Node *root;
  BTree(){
    root = NULL;
  }
  void insert(int data){
    Node *node = new Node(data);
    if(root==NULL){
      root = node;
    }else if(root->data >= data){
      root->left = insertHelper(root->left,data);
    }else{
      root->right = insertHelper(root->right,data);
    }
  }
  void printInOrder(){
    cout << "BSTree Inorder" << endl;
    printInOrderHelper(root);
    cout << endl;
  }
  void printPreOrder(){
    cout << "BSTree Preorder" << endl;
    printPreOrderHelper(root);
    cout << endl;
  }
  void printPostOrder(){
    cout << "BSTree Postorder" << endl;
    printPostOrderHelper(root);
    cout << endl;
  }
};