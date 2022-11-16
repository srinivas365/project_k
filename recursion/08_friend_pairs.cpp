#include<iostream>
using namespace std;

int friendPairs(int n){
  if(n==0){
    return 0;
  }else if(n==1){
    return 1;
  }else if(n==2){
    return 3;
  }

  return friendPairs(n-1)+(n-1)*friendPairs(n-2);
}

int main(){
  int n;
  cin >> n;

  cout << "No.of ways:"<<friendPairs(n)<<endl; 
}