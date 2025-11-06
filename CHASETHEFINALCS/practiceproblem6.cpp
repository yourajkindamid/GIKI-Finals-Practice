#include <iostream>
using namespace std;

template<typename T>
class MedicalStaff
{
    protected:
    string name;
    T staffID;

    public:
    MedicalStaff(string a, T p)
    {
        name = a;
        staffID = p;
    }
    virtual void showDetails() const = 0;
};

class Doctor : public MedicalStaff<int>
{
    private:
    string specia;

    public:
    Doctor(string a, int p, string b) : MedicalStaff(a, p)
    {
        specia = b;
    }

    void showDetails() const override
    {
        cout << name << endl << staffID << endl << specia;
    }
};