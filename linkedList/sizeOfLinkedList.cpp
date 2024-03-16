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

void display(Node*temp)
{
    while (temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp=temp->next;
   }
   cout<<endl;

}

int size(Node *temp)
{
    int n=0;
    while (temp!=NULL)
   {
      n++;
      temp=temp->next;
   }
   return n;
}
int main()
{
   Node *a=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(40);
   Node *e=new Node(50);
   Node *f=new Node(60);

   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   e->next=f;
   
  display(a);
  cout<<"Size of linked List is: "<<size(a);
  
   



    
    


}