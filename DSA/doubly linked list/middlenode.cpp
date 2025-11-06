#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
}*head;


int findmid(node* x)
{
    node* slow = x;
    node* fast = x;

    // int dat = 0;

    // for(fast = x, slow = x; fast != NULL && fast->next != NULL; fast = fast->next->next, slow = slow->next)
    // {
    //     if(fast->next == NULL)
    //     {
    //         cout << slow->data;
    //         break;
    //     }
    // }

    // return dat;

    while(fast != NULL && fast -> next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow->data;


}
int main()
{
    node* a = new node;
    node* b = new node;
    node* c = new node;
    head = a;

    a->data = 1;
    a->next = b;

    b->data = 3;
    b->next = c;

    c->data = 5;
    c->next = NULL;

    cout << findmid(head);
}