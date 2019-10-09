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
  void show(){
    Node* n=head;
    while(n->next!=NULL){
      cout<<n->data<<" ";
      n=n->next;
    }
    cout<<n->data<<endl;
  }
  //to reverse a single linked List
  void rev(){
    Node *prev,*temp,*next;
    prev=NULL;
    temp=head;
    while(temp!=NULL){
      next=temp->next;
      temp->next=prev;
      prev=temp;
      temp=next;
    }
    head=prev;
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
