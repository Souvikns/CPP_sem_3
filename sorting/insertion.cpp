#include <iostream>
#include "headerFiles\print.h"
using namespace std;

void sort(int arr[],int n){
  int j;
  for(int i=1;i<n;i++){
    int temp=arr[i];
    for(j=i-1;j>=0&&arr[j]>temp;j--){
      arr[j+1]=arr[j];
    }
    arr[j+1]=temp;
  }
}

int main(){
  int arr[]={5,4,3,2,1};

  sort(arr,5);

  printArray(arr,5);

}
