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
int main()
{
   Node *a=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(40);

   a->next=b;
   b->next=c;
   c->next=d;
   
   Node *temp=a;
   while (temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp=temp->next;
   }
   cout<<endl;

   cout<<a->val<<endl; // a ki value
   cout<<a->next->val<<endl;// b ki value
   cout<<a->next->next->val<<endl;// c ki value
   cout<<a->next->next->next->val<<endl;// d ki value



    
    


}