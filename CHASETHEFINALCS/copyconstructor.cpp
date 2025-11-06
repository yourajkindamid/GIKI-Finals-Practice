#include <iostream>
using namespace std;

class A
{
    private:
    int heighta;
    int heightb;

    public:
    A(int a, int b)
    {
        heighta = a;
        heightb = b;
    }

    A(const A& obj)
    {
        heighta = obj.heighta;
        heightb = obj.heightb;
    }

    void display()
    {
        cout << heighta << ", " << heightb;
    }
};

int main()
{
    A a(12, 13);
    A b(a);

    a.display();
    cout << endl;
    b.display();
}