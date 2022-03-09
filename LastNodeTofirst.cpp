#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
  this->data = d;
  this->next = NULL;
}
};
void insertAtBack(Node* &tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  tail=temp;
}
void printNode(Node* &head){
  Node*temp =head;
  while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
    }
}
void lastTofirst(Node* &head){
  Node* temp =head;
  Node* pre = NULL;
  while(temp->next!=NULL){
    pre=temp;
    temp=temp->next;
  }
  pre->next = NULL;
  temp->next = head;
  head = temp;
  
}
int main() {
    int n;
     cin>>n;
     int d;
  cin>>d;
     Node* l = new Node(d);
  Node* tail=l;
  Node* head =l;
  for(int i=1;i<n;i++)
    {
      cin>>d;
      insertAtBack(tail,d);
    }
  lastTofirst(head);
  printNode(head);
}
