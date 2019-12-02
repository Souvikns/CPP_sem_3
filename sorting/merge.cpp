#include <iostream>
using namespace std;

void printArray(int arr[],int l){
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void merge(int arr[],int f,int l,int m){
  int i,j,k;
  int n1=m+1;
  int n2=l-m;

  int arr1[n1],arr2[n2];

  for(int i=0;i<n1;i++){
    arr1[i]=arr[i];
  }
  for(int i=0;i<n2;i++){
    arr2[i]=arr[m+1+i];
  }

  int x=0;
  int y=0;
  int z=0;

  while(x<n1&& y<n2){
    if(arr1[x]<=arr2[y]){
      arr[z++]=arr1[x++];
    }else{
      arr[z++]=arr2[y++];
    }
  }

  while(x<n1){
    arr[z++]=arr1[x++];
  }

  while(y<n2){
    arr[z++]=arr2[y++];
  }
}

void mergeSort(int arr[],int f,int l){
  if(f<l){
    int mid=(f+l)/2;

    mergeSort(arr,f,mid);
    mergeSort(arr,mid+1,l);

    merge(arr,f,l,mid);
  }
}

int main(){

  int arr[]={5,4,3,2,1};

  mergeSort(arr,0,5);

  printArray(arr,5);

}
