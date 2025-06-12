#include <iostream>
using namespace std;

template<typename T>
class Vehicle
{
    protected:
    string name;
    T id;

    public:
    Vehicle(string n, T m) //remember
    {
        name = n;
        id = m;
    }
    virtual void showDetails()
    {
        cout << name << ", " << id;
    }

    virtual ~Vehicle() {};
};

class Car :  public Vehicle<int>
{
    private:
    string fuelType;

    public:
    Car(string n, int i, string f):Vehicle(n, i)
    {
        fuelType = f;
    }

   void showDetails() override
   {
        cout << name << ", " << id << ", " << fuelType;
   }
   virtual ~Car() {};
};

class Truck : public Vehicle<int>
{
    private:
    int capacity;

    public:
    Truck(string n, int m, int c) : Vehicle(n, m)
    {
        capacity = c;
    }

    void showDetails() override
    {
        cout << name << ", " << id << ", " << capacity;
    }

    virtual ~Truck() {};
};

int main()
{
   Vehicle<int>* arr [3];
   arr[0] = new Car("Toyota Corlloa", 82, "diesel");
   arr[1] = new Car("Toyota Corl", 81, "die");
   arr[2] = new Car("tot", 32, "petr");

   for(int i=0; i<3; i++)
   {
        arr[i] -> showDetails();
   }
} 