#include <iostream>
using namespace std;
class Node{
public:
int data;
Node*next;
Node(int data)
{
  this->data=data;
  this->next=NULL;
}
};
void insertAtBack(Node* &tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  tail=temp;
}
void removeDuplicateUn(Node* &head){
   Node* temp =head;
   Node* cmp  = NULL;
   Node* pre = NULL;
  while(temp->next!=NULL && temp!=NULL){
    pre= temp;
    cmp=temp->next;
    while(cmp!=NULL){
      if(temp->data == cmp->data){
        cout<<cmp->data<<"matched"<<temp->data<<endl;
        pre->next = cmp->next;
        cmp->next = NULL;
        cmp = pre->next;
      }
      else{
        cout<<cmp->data<<"not matched"<<temp->data<<endl;
        pre=pre->next;
        cmp=cmp->next;
      }  
    }
    temp=temp->next;
  }
}
void printNode(Node* &head){
  Node*temp =head;
  while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
    }
}
int main() {
  int n,d;
  cin>>n;
  cin>>d;
  Node* l = new Node(d);
  Node* tail=l;
  Node* head =l;
  for(int i=1;i<n;i++)
    {
      cin>>d;
      insertAtBack(tail,d);
    }
  removeDuplicateUn(head);
  printNode(head);
}
