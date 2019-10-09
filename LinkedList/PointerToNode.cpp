#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
};

class list{
  Node* head=NULL;
  Node* tail=NULL;
public:
  void insert(int data){
    Node* node=new Node;
    node->data=data;
    if(head==NULL){
      head=node;
      tail=node;
    }else{
      tail->next=node;
      tail=tail->next;
    }
  }
  //to get the pointer of the last Node
  int getLast(){
    Node *n=head;
    while(n->next!=NULL){
      n=n->next;
    }
    return n->data;
  }
  //to get the pointer of the second last node
  int getSecondLast(){
    Node *n=head;
    while(n->next->next!=NULL){
      n=n->next;
    }
    return n->data;
  }
  //to get the pointer of a particular Node
  int getParticular(int data){
    Node *n=head;
    while(n->next!=NULL){
      if(n->data==data){
        break;
      }
      n=n->next;
    }
    return n->data;
  }
  //to get the pointer to predessesor of a node with a particular Node
  int getpred(int data){
    Node *n=head;
    while(n->next!=NULL){
      if(n->next->data==data){
        break;
      }
      n=n->next;
    }
    return n->data;
  }
  //to get a pointer of a particulr position
  int getPartPos(int k){
    Node *n= head;
    for(int i=0;i<k&&n!=NULL;i++){
      n=n->next;
    }
    return n->data;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  cout<<"Last Element "<<x.getLast()<<endl;
  cout<<"Second Last Element "<<x.getSecondLast()<<endl;
  cout<<"particular Element "<<x.getParticular(2)<<endl;
  cout<<"pred of particular Element"<<x.getpred(3)<<endl;
  cout<<"element of a particular position "<<x.getPartPos(0)<<endl;
}
