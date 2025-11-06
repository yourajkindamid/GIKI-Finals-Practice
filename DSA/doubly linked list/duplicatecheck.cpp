#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
}*head;

void dupche()
{
    struct Node* temp = head;

    if(head == NULL)
    {
        cout << "List is empty";
    }



    while(temp != NULL)
    {
        //mover must be redeclared to be equal to temp or else it will point to the last node by the end of the first inner loop
        struct Node* mover = temp;
        //very simple, i was confused for no valid reason
        //temp is matched with ever node the mover shifts itself to and incase of no matching, temp moves
        while(mover->next != NULL)
        {
            if(temp->data == mover->next->data)
            {
                //temp is for matching, mover is the culprit
                //Node* dup = temp;
                Node* dup = mover->next;
                mover->next = mover->next->next;

                //check if mover is not at the last node
                if(mover->next != NULL)
                {
                    mover->next->prev = mover;
                }

                delete dup;
            }
            else
            {
                mover = mover->next;
            }
        }
        temp = temp->next;
    }
    //this solution method is really stupid
    //no for loop?
    //for(temp != NULL; temp->data != temp2->data; temp = temp->next, temp2 = temp2->prev)
    
    // while(temp != NULL && temp2 != NULL && temp != temp2)
    // {
    //     if(temp->data == temp2->data)
    //     {
    //         temp->prev->next = temp->next->next;
    //         temp->next->prev = temp->prev;
            
    //         temp2->prev->next = temp2->next;
    //         temp2->next->prev = temp2->prev->prev;

    //         // delete temp;
    //         // delete temp2;
    //     }

    //     else
    //     {
    //         temp = temp->next;
    //         temp2 = temp2 -> prev;
    //     }



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
    struct Node* a = new Node;
    struct Node* b = new Node;
    struct Node* c = new Node;
    struct Node* d = new Node;
    head = a;

    a->data = 1;
    a->next = b;
    a->prev = NULL;

    b->data = 3;
    b->next = c;
    b->prev = a;

    c->data = 3;
    c->next = d;
    c->prev = b;

    d->data = 4;
    d->next = NULL;
    d->prev = c;

    cout << "Initial display...." << endl;
    display();


    dupche();

    cout << "Post-duplicate removal......" << endl;
    display();
}
