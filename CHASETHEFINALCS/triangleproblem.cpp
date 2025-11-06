#include <iostream>
using namespace std;

class A
{
    public:
    A(){cout << "yo";}
    void display()
    {
        cout << "wow";
    }
};

class B : public A
{
    public:
    B(){cout << "salam";}
};

class C : public A{
    public:
    C(){cout << "hi";}
};

class D : public A, B, C
{
    public:
    D(){cout << "wu";}
};

int main()
{
    D d;
}