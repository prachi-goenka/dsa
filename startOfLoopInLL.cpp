#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
  this->data=d;
  this->next=NULL;
}
};
void insertAtBack(Node* &tail,int d){
  Node *temp=new Node(d);
  tail->next=temp;
  tail=temp;
}

Node* startOfLoop(Node* &head){
  Node* temp1=head;
  Node* temp2=head;
  while(temp1->next!=NULL&&temp1!=NULL){
    temp1=temp1->next->next;
    temp2=temp2->next;
    if(temp1==temp2)
      break;
  }
  
    
  temp2=head;
  temp1=temp1->next;
  while(temp2!=temp1)
    {
      temp2=temp2->next;
      temp1=temp1->next;
    }
  return temp2;
  }

using namespace std;
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
  int x;
  cin>>x;
  Node* temp=head;
  for(int p=1;p<x-1;p++){
    temp=temp->next;
  }
  tail->next=temp->next;
  Node* start = startOfLoop(head);
  cout<<start->data;
  cout<<head->data;
}
