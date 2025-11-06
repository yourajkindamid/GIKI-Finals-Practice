#include <iostream>
using namespace std;

enum Department
{
    HR, Engineering, Sales
};

struct Employee
{
    //private:
    int id;
    string name;
    float salary;
    Department dept;

    //public:
    //friend istream& operator>>(const istream& in, const Employee& emp) {};
};

istream& operator>>(istream& in, Employee& emp)
{
    int deptChoice;
    cout << "Enter Employee ID: ";
    in >> emp.id;
    in.ignore();  // clear newline

    cout << "Enter Name: ";
    in >> emp.name;

    cout << "Enter Salary: ";
    in >> emp.salary;

    cout << "Enter Department (0 = HR, 1 = Engineering, 2 = Sales): ";
    in >> deptChoice;

    while (deptChoice < 0 || deptChoice > 2) 
    {
        cout << "Invalid input. Enter 0, 1, or 2: ";
        in >> deptChoice;
    }

    emp.dept = static_cast<Department>(deptChoice);
    return in;
}

ostream& operator<<(ostream& out, Employee& em)
{
    out << em.id << endl;
    out << em.name << endl;
    out << em.salary << endl;
    out << em.dept << endl;
    return out; 
}

class Company
{
    public:
    static void displayEmployee(Employee& a1) {};
};

void Company::displayEmployee(Employee& a1)
{
    cout << a1;
}

int main()
{
    Employee Employee[3];
    cout << "Employee 1: ";
    cin >> Employee[0];

    Company::displayEmployee(Employee[0]);

    cout << "Employee 2: ";
    cin >> Employee[1];
    cout << "Employee 3: ";
    cin >> Employee[2];
}
