#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head;

void dell(int b)
{
    struct Node* temp = head;

    if(head == NULL)
    {
        cout << "List is empty";
        return;
    }

    if(head->data == b)
    {
        head = head->next;
        //forgot to update the prev as we are assigning a new prev
        head->next->prev = NULL;
        //we need temp in addition but we dont need temp in deletion
        delete temp;
        return;
    }

    while(temp->data != b)
    {
        temp = temp->next;
    }

    //for last node
    if(temp->next == NULL)
    {
        temp = temp->prev;
        temp->next = NULL;
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    int tode;
    struct Node* a = new Node;
    struct Node* b = new Node;
    struct Node* c = new Node;
    head = a;

    a->next = b;
    a->prev = NULL;
    a->data = 1;

    b->next = c;
    b->prev = a;
    b->data = 3;
    
    c->data = 6;
    c->next = NULL;
    c->prev = b;

    cout << "Insert element to delete: ";
    cin >> tode;

    dell(tode);

    cout << "Displaying..." << endl;
    display();
}