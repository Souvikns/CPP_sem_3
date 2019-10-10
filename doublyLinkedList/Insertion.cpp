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
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.insertAtFront(6);
  x.insertAtlast(7);
  x.show();
}
