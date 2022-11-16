#include<iostream>
using namespace std;

int wtf(int n){
  if(n<4){
    return 1;
  }
  return wtf(n-1)+wtf(n-4);
}

int main(){
  int n;
  cin >> n;
  int ways = wtf(n);
  cout << "ways to fill:"<<ways<<endl;
}