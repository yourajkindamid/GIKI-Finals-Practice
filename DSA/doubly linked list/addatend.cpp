#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head;

void adder(int b)
{
    struct Node* temp = head;

    if(head == NULL)
    {
        // struct Node* a = new Node;
        // a->data = b;
        // a->next = NULL;
        // a->prev = NULL;
        // if list is empty just use head
        head ->data = b;
        head -> next = NULL;
        head -> prev = NULL;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    struct Node* add = new Node;
    add -> data = b;
    add -> next = NULL;
    add -> prev = temp;

    temp ->next = add;
    //delete temp;
    //temp is required
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
    int num;
    struct Node* a = new Node;
    struct Node* b = new Node;
    head = a;

    a->data = 12;
    a->next = b;
    a->prev = NULL;

    b->data = 14;
    b->next = NULL;
    b->prev = a;

    cout << "Enter the number to add: ";
    cin >> num;

    adder(num);

    cout << "Displaying...." << endl;
    display();
    
}