// check if array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int* arr, int i, int n){
  if(i>=n){
    return 1;
  }
  return (arr[i-1] < arr[i]) and isSorted(arr,i+1,n);
}

int main(){

  int arr[] = {};
  int arr_size = sizeof(arr)/sizeof(int);
  bool x = isSorted(arr,1,arr_size);

  cout << "Is array sorted:"<< x << endl;
}