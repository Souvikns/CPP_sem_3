#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
};

class list{
public:
    Node* head=NULL;
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
};
//to concat two given list
void concat(list a,list b){
  Node* n=a.head;
  while(n->next!=NULL){
    n=n->next;
  }
  n->next=b.head;
}

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.show();
  list y;
  for(int i=0;i<5;i++){
    y.insert(i+1);
  }
  y.show();
  concat(x,y);
  x.show();
}
