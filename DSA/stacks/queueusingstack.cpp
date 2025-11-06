#include <iostream>
using namespace std;

#define N 3
int stack[N];
int top = -1;
int stack2[N];
int top2 = -1;

void push(int x)
{
    if(top == -1)
    {
        stack[0] = x;
        top = 0;
    }

    else if(top == N-1)
    {
        cout << "stack is full" << endl;
        return;
    }

    top = top + 1;
    stack[top] = x;
}

void displaytop()
{
    cout << stack[top] << endl;
}

void pop()
{
    if(top == -1)
    {
        cout << "stack is empty";
        return;
    }

    int del = stack[top];
    top = top - 1;
}

void enqueue()
{

}

int main()
{
    push(5);
    displaytop();
    push(6);
    displaytop();
    push(7);
    pop();
    displaytop();
}