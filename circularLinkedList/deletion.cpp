#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
};
class list{
  Node* last=NULL;
public:
  void insert(int data){
    Node* node= new Node;
    node->data=data;
    if(last==NULL){
      last=node;
      last->next=last;
    }else{
      node->next=last->next;
      last->next=node;
      last=node;
    }
  }
  //delete the first node
  void deleteFirst(){
    if(last->next==last){
      Node* x=last;
      last=NULL;
      delete(x);
      return;
    }
    Node* n= last->next;
    last->next=n->next;
    delete(n);
  }
  //delete the last node
  void deleteLast(){

    if(last->next==last){
      Node* x=last;
      last=NULL;
      delete(x);
      return;
    }

    Node* n=last;
    Node*p =last->next;
    do {
      p=p->next;
    } while(p->next->next!=last->next);
    p->next=last->next;
    last=p;
    delete(n);
  }
  void show(){
    Node* n= last->next;
    do {
      cout<<n->data<<" ";
      n=n->next;
    } while(n!=last->next);
    cout<<endl;
  }
};

int main(){
  list x;
  for(int i=0;i<5;i++){
    x.insert(i+1);
  }
  x.deleteFirst();
  x.show();
  x.deleteLast();
  x.show();

}
