#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base\n"; }  // Must be polymorphic for dynamic_cast
};

class Derived : public Base {
public:
    void show() override { cout << "Derived\n"; }
    void derivedOnly() { cout << "Derived specific function\n"; }
};

int main() {
    Base* b = new Derived();  // Upcasting (safe)
    
    // Base* c;

    // c->show();  //will not work as there is nothing stored inside the base class B pointer 

    //Derived *h = b;

    b->show();
    // Downcasting safely
    Derived* d = dynamic_cast<Derived*>(b);
    if (d) {
        d->show();  // Safe to use
    }
    delete b;
}
