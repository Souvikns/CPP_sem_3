#include <iostream>
#include "headerFiles\print.h"
using namespace std;



int main(){
  int arr[]={5,4,3,2,1};
  for(int i=0;i<5-1;i++){
    for(int j=i+1;j<5;j++){
      if(arr[i]>arr[j]){
        int swap=arr[i];
        arr[i]=arr[j];
        arr[j]=swap;
      }
    }
  }
  printArray(arr,5);

}
