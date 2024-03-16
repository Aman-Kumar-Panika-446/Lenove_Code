#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void display(Node *temp)
{
    if(temp==NULL) return;
    
    cout<<temp->val<<" ";
    
    display(temp->next);
}
void insertAtEnd(int val ,Node *head)
{
    Node *temp=new Node(val);
    while (head->next!=NULL) head=head->next;

    head->next=temp;
    
}
int main()
{
   Node *a=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(45);

   a->next=b;
   b->next=c;
   c->next=d;

   display(a);
   cout<<endl;
   insertAtEnd(50,a);
   display(a);
   cout<<endl;
   insertAtEnd(50,a);
   display(a);


}       