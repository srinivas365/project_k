#include<iostream>
using namespace std;
// a^n = (a^n/2)^2 if n is even
// a^n = a.(a^n/2)^2 if n is odd

int fast_exponent(int x,int exp){
  cout << x << "^" << exp << endl;
  if(exp==0) return 1;
  int subexp = fast_exponent(x,exp/2);
  subexp = subexp*subexp;
  if(exp&1){
    return x*subexp;
  }
  return subexp;
}

int main(){
  int n,exp;
  cin >> n;
  cin >> exp;
  cout << fast_exponent(n,exp) << endl;
}