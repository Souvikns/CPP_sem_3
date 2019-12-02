#include <iostream>
using namespace std;

void printArray(int arr[],int l){
  for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[]={5,4,3,2,1};
  int l = sizeof(arr)/sizeof(arr[0]);



  for(int i=0;i<l-1;i++){
    int smallest=arr[i];
    int index=i;
    for(int j=i;j<l;j++){
      if(smallest>arr[j]){
        smallest=arr[j];
        index=j;
      }
    }
    int swap=arr[i];
    arr[i]=arr[index];
    arr[index]=swap;
  }

  printArray(arr,l);

}
