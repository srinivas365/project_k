// count binary numbers whose doesn't have consecutive 1's given n
#include<iostream>
using namespace std;
int countStrings(int n){
  if(n<0){
    return 0;
  }else if(n==0){
    return 1;
  }else if (n==1){
    return 1;
  }else if(n==2){
    return 3;
  }
  return countStrings(n-1)+countStrings(n-2);
}

int main(){
  int n;
  cin >> n;
  cout << "no.of strings:"<<countStrings(n)<<endl;
}