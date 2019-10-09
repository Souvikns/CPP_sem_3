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
};

int main(){
  list x;

  for(int i=0;i<5;i++){
    x.insertBeg(i+1);
  }
  x.insertAtlast(6);
  x.show();
}