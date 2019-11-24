#include <iostream>
using namespace std;

class Queue{
  int front,rear,size;
  int capacity;
  int* arr;
};

Queue* create(int capacity){
  Queue* queue= new Queue();
  queue->capacity=capacity;
  queue->front=queue->size=0;
  queue->rear=-1;
  queue->arr=new int[(queue->capacity*sizeof(int))];
}

bool isEmpty(Queue* queue){
  return (queue->size==0);
}

bool isFull(Queue* queue){
  
}

int main(){

}
