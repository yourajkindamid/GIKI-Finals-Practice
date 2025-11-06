#include <iostream>
using namespace std;


string a;
#define len sizeof(a)/sizeof(a[0])

char queue[len-1];

int front = -1;
int rear = -1;

void enqueue(string a)
{
    for(int i = 0; i<len; i++)
    {
        queue[i] = a[i];
    }

    int front = 0;
    int rear = len-1;
}

char stack[len-1];
int top = -1;

void pushall()
{
    for(int i = 1; i < len; i++)
    {
        stack[len - i] = queue[i];
    }

    top = len - 1;
}

bool ispali()
{
    bool ispal = true;

    for(int i = 0; i < len - 1; i++)
    {
        if(stack[i] != queue[i])
        {
            ispal = false;
            break;
        }
    }

    return ispal;
}

int main()
{
    a = "racecar";
    enqueue(a);
    pushall();
    cout << ispali();
}
