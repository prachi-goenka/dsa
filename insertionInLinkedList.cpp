#include <iostream>
using namespace std;
//creating class node (data and another node class)
class Node{
public:
int data;
Node* next;
//constructor(called whenever new obj of class node is created.)
Node(int data)
{
  this->data = data;
  this->next = NULL;
}
};
//to insert element at head
//here we take &head(reference calling) so that we can see changes //directly in our linked list rather than creating a copy
void insertAtHead(Node* &head,int d){
  Node* temp = new Node(d);
  temp->next=head;
  head = temp;
}
//insertion at back
void insertAtBack(Node* &tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  tail=temp;
}
//insert in the given position(middle)
void insertAtMiddle(Node* &head,int p,int d){
  Node *temp = head;
  int c=1;
  while(c<p-1){
    c++;
    temp=temp->next;
  }
  Node* nodeToInsert = new Node(d);
  nodeToInsert->next=temp->next;
  temp->next=nodeToInsert;
}
//print the linked list
void printNode(Node* &head){
  Node*temp =head;
  while(temp!=NULL)
    {
       cout<<temp->data<<" ";
      //cout<<temp->next<<"->";
      temp=temp->next;
    }
}
//driver code
int main() {
  Node *node1 = new Node(10);
  //cout<<node1->data<<" ";
  //cout<<node1->next;
  Node* head = node1;
  Node* tail =node1;
  insertAtBack(tail,15);
  insertAtHead(head,12);
  insertAtMiddle(head,2,20);
  printNode(head);
}
