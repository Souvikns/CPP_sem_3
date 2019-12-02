#include <iostream>
using namespace std;

void printArray(int* a,int l){
  for(int i=0;i<l;i++){
    cout<<*(a+i)<<" ";
  }
  cout<<endl;
}
