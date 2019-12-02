#include <iostream>
#include <stdlib.h>
#include <time.h>



int* gen(int n,int l){
  int *arr=new int[l];
  srand(time(0));
  for(int i=0;i<l;i++){
    arr[i]=rand()%n;
  }
  return arr;
}
