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
      head=node;
    }else{
      Node* n=head;
      while(n->next!=NULL){
        n=n->next;
      }
      node->prev=n;
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
  //reverse a doubly linked list 
  void rev(){
    Node* p1=head;
    Node* p2=p1->next;
    p1=head;
    p2=p2->next;
    p1->next=NULL;
    p1->prev=p2;
    while(p2!=NULL){
      p2->prev=p2->next;
      p2->next=p1;
      p1=p2;
      p2=p2->prev;
    }
    head=p1;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.rev();
  x.show();
}
