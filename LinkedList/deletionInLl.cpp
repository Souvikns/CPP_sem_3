#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
  Node* prev=NULL;
};
class list{
  Node* head=NULL;
  Node* tail=NULL;
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
  //delete the first node of the list
  void deleteFirst(){
    Node* n=head;
    head=head->next;
    free(n);
  }
  //deletion in between nodes
  void deleteInBetween(int pos){
    Node* n=head;
    for(int i=0;i<pos-1&&n!=NULL;i++){
      n=n->next;
    }
    Node* temp=n->next;
    n->next=temp->next;
    free(temp);
  }
  //delete the last node of the list
  void deleteLast(){
    Node* n=head;
    while(n->next->next!=NULL){
      n=n->next;
    }
    Node* temp=n->next;
    n->next=temp->next;
    free(temp);
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.deleteFirst();
  x.deleteInBetween(2);
  x.deleteLast();
  x.show();
}
