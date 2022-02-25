#include <iostream>
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
int detectLoop(Node* &head){
  Node* tem1 = head;
  Node* tem2 = head;
  while(tem1->next!=NULL&&tem1!=NULL){
    tem1=tem1->next->next;
    tem2=tem2->next;
    if(tem1==tem2)
      return 1;
  }
  
    return 0;
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
  if(detectLoop(head))
    cout<<"True";
  else
    cout<<"False";
}
