#include <iostream>
using namespace std;

void swap(int* a,int* b){
  int s=*a;
  *a=*b;
  *b=s;
}

int partition(int arr[],int f,int l,int s){
  int pivot=arr[f];
  int i=f;
  int j=s;
  while(i<j){
    do{
      i++;
    }while(arr[i]<=pivot);
    do{
      j--;
    }while(arr[j]>=pivot);
    if(i<j){
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[f],arr[j]);
  return j;
}

void quickSort(int arr[],int f,int l,int s){
  if(f<s){
    int j=partition(arr,f,l,s);
    quickSort(arr,f,j,s);
    quickSort(arr,j+1,l,s);
  }
}

void printArray(int arr[],int l){
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[]={5,4,3,2,1};
  printArray(arr,5);
  quickSort(arr,0,5,5);
  printArray(arr,5);

}
