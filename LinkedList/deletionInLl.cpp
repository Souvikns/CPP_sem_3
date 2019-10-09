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
  //delete the first node of the list
  void deleteFirst(){
    Node* n=head;
    head=head->next;
    free(n);
  }
  
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.deleteFirst();
  x.show();
}
