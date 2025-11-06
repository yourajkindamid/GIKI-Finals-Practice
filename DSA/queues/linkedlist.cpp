#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* front = NULL;
node* rear = NULL;

void enqueue(int x)
{
    node* temp = new node;
    temp -> data = x;
    temp->next = NULL;

    if(front == NULL && rear == NULL)
    {
        front = rear = temp;
    }

    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if(front == NULL)
    {
        cout << "empty" << endl;
    }

    else{
        node* del = front;
        front = front->next;
        delete(del);
    }

}

void display()
{
    struct node* temp = front;

    while(temp != NULL)
    {
        cout<< temp->data << endl;
        temp = temp->next;
    }
}


int main()
{
    enqueue(12);
    enqueue(13);
    display();
    cout <<"AAA....."<< endl;
    dequeue();
    display();
}