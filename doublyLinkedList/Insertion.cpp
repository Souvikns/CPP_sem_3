#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
  Node* prev=NULL;
};

class list{
  Node* head=NULL;
  //Node* tail=NULL;
public:
  void insert(int data){
    Node* node= new Node;
    node->data=data;
    if(head==NULL){
      node->prev=NULL;
      head=node;
    }else{
      Node* n=head;
      while(n->next!=NULL){
        n=n->next;
      }
      node->prev=node;
      n->next=node;
    }
  }
  void show(){
    Node* n=head;
    while(n->next!=NULL){
      cout<<n->data<<" ";
      n=n->next;
    }
    cout<<n->data<<endl;
  }
  //insert at front
  void insertAtFront(int data){
    Node* node = new Node;
    node->data=data;
    node->prev=NULL;
    node->next=head;
    head->prev=node;
    head=node;
  }
  //insert at last
  void insertAtlast(int data){
    Node* node = new Node;
    node->data=data;
    Node* n= head;
    while(n->next!=NULL){
      n=n->next;
    }
    n->next=node;
    node->prev=n;
  }
  //insertion after of a pointer
  void insertAfter(int data,int x){
    Node* node= new Node;
    node->data=data;
    Node* n=head;
    for(int i=0;i<x&&n!=NULL;i++){
      n=n->next;
    }
    node->next=n->next;
    node->prev=n;
    n->next->prev=node;
    n->next=node;
  }
  //insertion before a pointer
  void insertBefore(int data,int x){
    Node* node=new Node;
    Node* n=head;
    node->data=data;
    for(int i=0;i<x&&n!=NULL;i++){
      n=n->next;
    }
    node->prev=n->prev;
    node->next=n;
    n->prev->next=node;
    n->prev=node;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.insertAtFront(6);
  x.insertAtlast(7);
  x.insertAfter(12,2);
  //x.insertBefore(10,2);
  x.show();
}
