#include <iostream>
#include "D:\Users\Souvi\Documents\CPP\fianlExam\headerFiles\print.h"
using namespace std;


int main(){
  int arr[]={5,4,3,2,1};

  for(int i=1;i<5;i++){
    int temp=arr[i];
    int j;
    for( j=i-1;j>0&&temp<arr[j];j--){
      arr[j+1]=arr[j];
    }
    arr[j+1]=temp;
  }

  printArray(arr,5);

}
