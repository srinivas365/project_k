#include<iostream>
using namespace std;
int fib(int n){
  if(n==1 || n==0){
    return 1;
  }
  return fib(n-1)+fib(n-2);
}
int main(){
  int n;
  cin >> n;
  cout << "Fib of " << n << " is " << fib(n) << endl;
}