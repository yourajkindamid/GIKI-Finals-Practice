#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head, *tail;

bool check()
{
    struct Node* temp = head;
    struct Node* temp2 = tail;
    bool check;
    if(head == NULL)
    {
        cout << "List is empty";
    }

    for(temp != NULL; temp->data == temp2->data; temp = temp->next, temp2->prev = temp2)
    {
        if(temp->data != temp2->data)
        {
            check = false;
        }
        else
        {
            check = true;
        }
    }

    return check;

}

int main()
{
    struct Node* a = new Node;
    struct Node* b = new Node;
    struct Node* c = new Node;
    head = a;
    tail = c;
    
    a->data = 1;
    a->next = b;
    a->prev = NULL;

    b->data = 0;
    b->next = c;
    b->prev = a;

    c->data = 1;
    c->next = NULL;
    c->prev = b;

    cout << check();
}