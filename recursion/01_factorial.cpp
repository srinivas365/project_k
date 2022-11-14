#include<iostream>
using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  return n*factorial(n-1);
}

int tail_factorial_helper(int n,int output){
  if(n==0){
    return output;
  }
  return tail_factorial_helper(n-1,output*n);
}

int tail_factorial(int n){
  int x = 1;
  int y = tail_factorial_helper(n,x);
  return y;
}

int main(){
  int n;
  cin >> n;
  int output = factorial(n);
  int tail_output = factorial(n);
  cout << n << " factorial: "<< output << endl;
  cout << n << " tail recursion factorial: "<< output << endl;
}