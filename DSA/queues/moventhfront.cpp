#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(rear == N-1 || front == rear + 1)
    {
        cout << "Queue is full" << endl;
        return;
    }

    else if(front == -1)
    {
        front = 0;
        rear = 0;

        queue[front] = x;
    }

    else
    {
        rear = rear + 1;
        queue[rear] = x;
    }
}

void display()
{
    for(int i = 0; i < N; i++)
    {
        cout << queue[i] << endl;
    }
}

void movefront(int y)
{
    int temp = queue[y];

    for(int i = y; i>0; i--)
    {
        queue[i] = queue[i-1];
    }

    queue[front] = temp;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(7);
    enqueue(8);
    display();

    cout << "New display....." << endl;
    movefront(4);
    display();
}