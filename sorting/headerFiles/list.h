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
    Node* node= new Node;
    node->data=data;
    if(head==NULL){
      head=node;
      tail=node;
    }else{
      tail->next=node;
      tail=tail->next;
    }
  }
  void show(){
    Node* n=head;
    while(n->next!=NULL){
      cout<<n->data<<" ";
      n=n->data;
    }
    cout<<n->data<<endl;
  }
};
