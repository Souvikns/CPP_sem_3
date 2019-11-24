#include <iostream>
using namespace std;

#define MAX 1000

class Stack{
  int top;
public:
  int arr[MAX];
  Stack(){
    top=-1;
  }

  void push(int data);
  int pop();
  int peek();
  bool isEmpty();
};

void Stack::push(int data){
  if(top==MAX-1){
    cout<<"Overflow"<<endl;
    return;
  }
  arr[++top]=data;
  cout<<"Pushed in stack"<<endl;
}

int Stack::pop(){
  if(top==-1){
    cout<<"Underflow"<<endl;
    return 0;
  }
  int item=arr[top];
  top--;
  return item;
}

int Stack::peek(){
  if(top==-1){
    cout<<"Stack is empty"<<endl;
    return 0;
  }
  int item=arr[top];
  return item;
}

bool Stack::isEmpty(){
  return (top==-1);
}


int main(){
  Stack x;
  x.push(1);
  x.push(2);
  x.push(3);
  cout<<x.pop()<<endl;
  cout<<x.peek()<<endl;

}
