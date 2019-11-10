#include <iostream>
using namespace std;

stuct Node{
  int data;
  Node* left=NULL;
  Node* right=NULL;
};

class tree{
  Node* root=NULL;
  void insert(int data){
    Node* node= new Node;
    node->data=data;
    if(root==NULL){
      root=node;
    }else{
      
    }
  }
}

int main(){

}
