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
  //insert in the first of the lisked list
  void insertBeg(int data){
    Node* node= new Node;
    node->data=data;
    node->next=head;
    head=node;
    
  }
  //to print all the node in the list
  void show(){
    Node *n=head;
    while(n->next!=NULL){
      cout<<n->data<<" ";
      n=n->next;
    }
    cout<<n->data<<endl;
  }
  //insert element at the last of the list
  void insertAtlast(int data){
    Node *node=new Node;
    node->data=data;
    Node *n=head;
    while(n->next!=NULL){
      n=n->next;
    }
    n->next=node;
    node->next=NULL;
  }
  //insert after a given Node
  void insertafter(int data,int x){
    Node* node= new Node;
    Node* n=head;
    node->data=data;
    while(n!=NULL){
      if(n->data==x){
        break;
      }
      n=n->next;
    }
    node->next=n->next;
    n->next=node;
  }
  //insert before a given node
  void insertbefore(int data,int x){
    Node* node= new Node;
    Node* n=head;
    node->data=data;
    while(n->next!=NULL){
      if(n->next->data==x){
        break;
      }
      n=n->next;
    }
    node->next=n->next;
    n->next=node;
  }
  //insertion of an element at a given position
  void insertAt(int data,int x){
    Node* node=new Node;
    Node* n=head;
    node->data=data;
    for(int i=0;i<x-1&&n!=NULL;i++){
      n=n->next;
    }
    node->next=n->next;
    n->next=node;
  }
};

int main(){
  list x;

  for(int i=0;i<5;i++){
    x.insertBeg(i+1);
  }
  x.insertAtlast(6);
  x.insertafter(7,3);
  x.insertbefore(8,4);
  x.insertAt(10,3);
  x.show();
}
