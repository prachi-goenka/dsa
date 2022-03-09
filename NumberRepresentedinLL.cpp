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
int number(Node* &head){
  Node* temp =head;
  int num=0;
  while(temp!=NULL){
    num = num*10+temp->data;
    temp=temp->next;
  }
  return num;
  
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
  int num = number(head);
  cout<<num+1;
}
