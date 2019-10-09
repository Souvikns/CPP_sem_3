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
  int getLast(){
    Node *n=head;
    while(n->next!=NULL){
      n=n->next;
    }
    return n->data;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  cout<<x.getLast()<<endl;
}
