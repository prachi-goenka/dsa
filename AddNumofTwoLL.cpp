//Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

//The sum list is a linked list representation of the addition of two input numbers from the last.
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
void insertAtBack(Node* &tail1,int d){
  Node *temp=new Node(d);
  tail1->next=temp;
  tail1=temp;
}
void insertAtBackk(Node* &tail2,int d){
  Node *temp=new Node(d);
  tail2->next=temp;
  tail2=temp;
}
int number1(Node* &head1){
  Node* temp =head1;
  int num=0;
  while(temp!=NULL){
    num = num*10+temp->data;
    temp=temp->next;
  }
  return num;
  
}
int number2(Node* &head2){
  Node* temp =head2;
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
  Node* tail1 =l;
  Node* head1 =l;
  for(int i=1;i<n;i++)
    {
      cin>>d;
      insertAtBack(tail1,d);
    }
  int m;
  cin>>m;
  cin>>d;
  Node* p =new Node(d);
  Node* tail2 = p;
  Node* head2 =p;
  for(int i=1;i<m;i++)
    {
      cin>>d;
      insertAtBackk(tail2,d);
    }
  int num1 = number1(head1);
  int num2 = number2(head2);
  cout<<num1+num2;
}
