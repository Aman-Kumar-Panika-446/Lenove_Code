#include <iostream>
using namespace std;
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

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    // Insert At End of Linked List
    void insertAtTail(int x)
    {
        Node *temp = new Node(x);
        if (size > 0)
        {
            tail->next = temp;
            tail = temp;
            size++;
        }
        else
        {
            head = tail = temp;
            size++; // imp
        }
    }
    void deleteAtTail()
    {
        Node *temp = head;
        if (size == 0)
            cout << "Linked List is empty";
        else
        {
            for (int i = 1; i < size - 1; i++)
                temp = temp->next;

            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    // Insert At Beginning of Linked List
    void insertAtHead(int x)
    {
        Node *temp = new Node(x);
        if (size == 0)
        {
            head = tail = temp;
            size++;
        }
        else
        {
            temp->next = head;
            head = temp;
            size++;
        }
    }
    // Remove element from Head
    void deleteAtHead()
    {
        if (size == 0)
            cout << "Linked List is empty";
        else
        {
            head = head->next;
            size--;
        }
    }
    // Insert At any Index
    void insertAt(int idx, int x)
    {
        if (idx < 0 || idx > size)
            cout << "Index out of bound";
        else if (idx == 0)
            insertAtHead(x);
        else if (idx == size)
            insertAtTail(x);
        else
        {
            Node *t = new Node(x);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    // Delete Element At Any Index
    void deleteAtIdx(int idx)
    {
        if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i < idx; i++) temp = temp->next;
                
            temp->next = temp->next->next;
            size--;
        }
    }
    // Get Element of any Index
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "Index out of bound";
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    // Display function
    void display()
    {
        Node *temp = head; // We can not use head directly (otherwise head ko kho denge)
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList ll;

    ll.insertAtHead(1);
    ll.insertAtTail(10);
    // ll.deleteAtHead();
    // ll.display();

    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    // ll.display();

    ll.insertAt(5, 100);
    // ll.deleteAtHead();
    ll.display();
    // cout << ll.getAtIdx(7);
    ll.deleteAtTail();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}