#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head;

int main()
{
    struct Node *a = new Node;
    head = a;
    struct Node *b = new Node;
    struct Node *c = new Node;

    a->data = 12;
    a->next = b;
    a->prev = NULL;

    b->data = 14;
    b->next = c;
    b->prev = a;

    c->data = 15;
    c->next = NULL;
    c->prev = b;


    while(head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }

}