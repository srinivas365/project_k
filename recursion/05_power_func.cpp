// calculate the power of n given exponent

#include<iostream>
using namespace std;

int exponent(int n,int exp){
  if(exp==0){
    return 1;
  }
  return n * exponent(n,exp-1);
}

int main(){
  int n,exp;
  cin >> n;
  cin >> exp;
  cout << exponent(n,exp) << endl;
}