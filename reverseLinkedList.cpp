#include <iostream>
using namespace std;
class Node{
public:
 int data;
 Node* next;
 Node(int data){
   this->data=data;
   this->next=NULL;
}
};
void insertAtHead(Node* &head,int d){
  Node* temp = new Node(d);
  temp->next=head;
  head = temp;
}
void printNode(Node* &head){
  Node*temp =head;
  while(temp!=NULL)
    {
       cout<<temp->data<<" ";
      //cout<<temp->next<<"->";
      temp=temp->next;
    }
}
// reverse LL using iteration
void reverseLinkedList(Node* &head){
  Node* pre=NULL;
  Node* curr = head; 
  Node* next = NULL;
  while(curr!=NULL)
    {
      next=curr->next;
      curr->next=pre;
      pre=curr;
      curr=next;
    }
  head=pre;
}
int main() {
  Node *node1 = new Node(10);
  //cout<<node1->data<<" ";
  //cout<<node1->next;
  Node* head = node1;
  //Node* tail =node1;
  //insertAtBack(tail,15);
  insertAtHead(head,11);
  insertAtHead(head,12);
  insertAtHead(head,13);
  insertAtHead(head,14);
  //insertAtMiddle(head,2,20);
  printNode(head);
  reverseLinkedList(head);
  cout<<endl;
  printNode(head);
}
