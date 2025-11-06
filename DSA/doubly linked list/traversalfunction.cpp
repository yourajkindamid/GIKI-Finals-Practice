#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head;


void display()
{
    while(head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node* a = new Node;
    Node* b = new Node;
    Node* c = new Node;
    head = a;

    a->data = 12;
    a->next = b;
    a->prev = NULL;

    b->data = 13;
    b->next = c;
    b -> prev = a;

    c->data = 15;
    c->next = NULL;
    c->prev = b;

    display();
}