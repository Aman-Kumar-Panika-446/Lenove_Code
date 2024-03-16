#include <iostream>
using namespace std;
// Class to create Node
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// Display function with the help of loop
//Imp -> a ka address aage nhi jayega
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
//Display function with recursion
void displayrec(Node *head)
{
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
//Reverse Display Function
void revDisplay(Node *head)
{
    if(head==NULL) return;
    revDisplay(head->next);
    cout<<head->val<<" ";  
}
//Function to print size of LL
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}
int main()
{
    // Creation of Node
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    // Now its time to link it
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // Linked List Created

    cout << "Your Linked List is: ";
    // display(a);
    // revDisplay(a);
    // displayrec(a);
    // cout << "Size of Linked List is: " << size(a);
}