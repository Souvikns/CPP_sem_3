#include <ostream>
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
    if(head=NULL){
      head=node;
      tail=node;
    }else{
      node->next=head;
      head=node;
    }
  }
}

int main(){

}
