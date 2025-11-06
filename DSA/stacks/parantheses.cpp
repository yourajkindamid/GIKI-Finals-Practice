#include <iostream>
#include <stack>
using namespace std;

bool isbal(const string& paren)
{
    bool isbala;
    stack<char> st;
    char store;

    for(int i = 0; i < paren.size(); i++)
    {
        store = paren[i];

        if(store == '(')
        {
            st.push(store);
        }

        else if(store == ')')
        {
            st.pop();
        }
    }

    if(st.empty())
    {
        isbala = true;
    }

    else
    {
        isbala = false;
    }

    return isbala;
}

int main()
{
    string p = "(()";

    cout << isbal(p);
}