// print increasing and decreasing order given n
// n=5 1,2,3,4,5 5,4,3,2,1
#include<iostream>
using namespace std;

void dec_func(int x){
  if(x==0){
    cout << endl;
    return;
  }
  cout << x << ',';
  dec_func(x-1);
}
void inc_func(int x){
  if(x == 0){
    cout << endl;
    return;
  }
  inc_func(x-1);
  cout << x << ',';
}

int main(){
  int n = 5;
  dec_func(n);
  inc_func(n);
  
}