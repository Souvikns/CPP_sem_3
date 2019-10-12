#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
  Node* prev=NULL;
};
class list{
  Node* head=NULL;
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
  //deleting the first element
  void deleteFirst(){
    head=head->next;
    head->prev=NULL;
  }
  //deleting the last element
  void deleteLast(){
    Node* n= head;
    while(n->next->next!=NULL){
      n=n->next;
    }
    n->next=NULL;
  }
  //delete at a position
  deleteAtpos(int x){
    Node* n= head;
    for(int i=0;i<x-1&&n!=NULL;i++){
      n=n->next;
    }
    Node* q=n->next;
    q->next->prev=n;
    n->next=q->next;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.show();
  x.deleteFirst();
  x.show();
  x.deleteLast();
  x.show();
  x.deleteAtpos(1);
  x.show();
  return 0;
}
