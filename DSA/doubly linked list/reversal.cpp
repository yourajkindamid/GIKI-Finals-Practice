#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
}*head;


int stack[3];
int top = -1;


void reverse(node* head)
{
    node* temp = head;
    int i = 2;
    cout << "Initial order and postions within stack: " << endl;
    while(temp != NULL)
    {
        stack[i] = temp->data;
        temp = temp->next;
        cout << i << " " << stack[i] << endl;
        i--; 
    }

    temp = head;

    int j = 0;
    while(temp != NULL)
    {
        temp->data = stack[j];
        temp = temp -> next;
        j++;
    }

    cout << "INTERMISSION..........." << endl;

    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    node* a = new node;
    node* b = new node;
    node* c = new node;
    head = a;

    a->data = 1;
    a->next = b;

    b->data = 2;
    b->next = c;

    c->data = 3;
    c->next = NULL;

    reverse(head);
}