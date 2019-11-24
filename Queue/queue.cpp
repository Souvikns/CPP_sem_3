#include <iostream>
using namespace std;

class Queue{
public:
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
  return (queue->size==queue->capacity);
}

void enqueue(Queue* queue,int item){
  if(isFull(queue)){
    cout<<"Overflow"<<endl;
    return;
  }
  queue->rear++;
  queue->arr[queue->rear]=item;
  queue->size++;
}

int dequeue(Queue* queue){
  if(isEmpty(queue)){
    cout<<"Underflow"<<endl;
    return INT_MIN;
  }
  int item=queue->arr[queue->front];
  queue->front++;
  queue->size--;
  return item;
}


int main(){
  Queue* x=create(5);
  enqueue(x,1);
  enqueue(x,2);
  enqueue(x,3);
  enqueue(x,4);

  cout<<dequeue(x)<<endl;
  cout<<dequeue(x)<<endl;
}
