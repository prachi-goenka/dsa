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
void printNode(Node* head){
  Node*temp =head;
  while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
    }
}
Node* intersectionLL(Node* head1,Node* head2){
  Node* head=new Node(0);
  Node* tail=head;
  Node* temp1=head1;
  Node* temp2=head2;
  while(temp1!=NULL){
    temp2=head2;
    while(temp2!=NULL){
      if(temp1->data==temp2->data){
        insertAtBack(tail,temp1->data);
      }
      temp2=temp2->next;
    }
    temp1=temp1->next;
  }
  Node* p = head;
  head=head->next;
  p=NULL;
  return head;
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
      insertAtBack(tail2,d);
    }
  
 Node* head = intersectionLL(head1,head2);
 printNode(head);
}
