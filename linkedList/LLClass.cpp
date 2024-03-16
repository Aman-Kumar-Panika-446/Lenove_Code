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

class LinkedList{
    public:
    Node*head;
    Node *tail;
    int size;

    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val)
        {
            Node *temp= new Node(val);
            if(size==0) head=tail=temp;
            else{
                tail->next=temp;
                tail=temp;
            }
            size++;
        }

    void insertAtBeginning(int val){
        Node *temp= new Node(val);
        if(size==0) tail=head=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;

    }   
    //10 20 30 40 
    void insertAtIdx(int idx,int val)
    {
        Node *t=head;
        Node *temp = new Node(val);
        for(int i=0;i<idx-1;i++)
        {
            t=head->next;
        }
        temp->next=t->next;
        t->next=temp;
        


    }
    // 10 20 30 40 
    int getElementAt(int idx){
        Node *temp=head;
        for(int i=0;i<idx;i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    void display()
    {
        Node *temp=head;
        while (temp!=NULL)
        {
           cout<<temp->val<<" ";
           temp=temp->next;
        }
        cout<<endl;        
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtBeginning(0);
    ll.display();

    ll.insertAtIdx(2,25);
    ll.display();

    cout<<ll.getElementAt(5);




}