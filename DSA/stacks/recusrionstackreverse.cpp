//reverse a stack recursively
#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s1, stack <int> &s2)
{
    s2.push(s1.top());
    s1.pop();

    if(s1.empty())
    {
        cout << "done" << endl;
    }
    else
    {
        reverse(s1, s2);
    }
}

int main()
{
    stack<int> s1;
    stack<int> s2;
    s1.push(4);
    s1.push(0);
    s1.push(1);
    s1.push(10);
    s1.push(3);
    s2.push(13);

    reverse(s1, s2);
    cout << "after recursive reversal: " << endl;
    while(!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }  

}