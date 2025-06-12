#include <iostream>
using namespace std;

class Ali
{
    protected:
    string name;
    string age;

    public:
        Ali(string s, string a) : name(s), age(a) {}

        void display()
        {
            cout << name << ", " << age;
        }
};

class Khi : public Ali
{
    int a;

    public:
    Khi(string d, string e, int b) : Ali(d, e)
    {
        a = b;
    }
};

int main()
{
    Ali a2("youraj", "2");

    double x = static_cast<double>(100 + 3);
    cout << x << endl;  

    a2.display();
}