#include <iostream>
using namespace std;

class EmployeeRecords
{
    private:
    static int IDcount;
    int ID;
    string name;
    int salary;

    public:
    static int totalemp;
    EmployeeRecords(string a, int b)
    {
        ID = IDcount++;
        name = a;
        salary = b;
        totalemp++;
    }

    ~EmployeeRecords()
    {
        cout << "ID destroyed";
        totalemp--;
    }

    friend void salarypayments(EmployeeRecords &obj){};
};

int EmployeeRecords::IDcount = 1000;
int EmployeeRecords::totalemp = 0;

void salarypayments(EmployeeRecords &obj)
{
    cout << obj.ID << obj.name << obj.salary;
}