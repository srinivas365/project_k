#include<iostream>
#include<vector>
using namespace std;

class Heap{
public:
  vector<int> arr;
  int idx;
  Heap(){
    arr.push_back(0);
  }
  void push(int data){
    arr.push_back(data);
    int n = arr.size()-1;
    while(n>1){
      if(arr[n/2]>arr[n]){
        swap(arr[n/2],arr[n]);
      }
      n = n/2;
    }
  }
  void print(){
    for(int i=1;i<arr.size();i++){
      cout << arr[i] << ",";
    }
    cout << endl;
  }
  void pop(){
    int n = arr.size()-1;
    swap(arr[1],arr[n]);
    int min = arr[1];
    arr.pop_back();
    heapify(1);

  }
  void heapify(int root){
      int left = root*2;
      int right = root*2+1;
      cout << left << "," << right<< endl;
      if(arr[root]>=arr[left] && left<arr.size()){
        swap(arr[root],arr[left]);
        heapify(left);
      }else if(arr[root]>arr[right] && right<arr.size()){
        swap(arr[root],arr[right]);
        heapify(right);
      }
  }
};