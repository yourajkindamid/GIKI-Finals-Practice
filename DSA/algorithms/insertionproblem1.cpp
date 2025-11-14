/*Create a structure containing studentName and GPA.
Write a program that sorts the list of students in descending order of GPA using Insertion Sort and displays the sorted records.*/

#include <iostream>
using namespace std;

struct sort
{   
    private:
    string student;
    float gpa;
    sort* next;

    public:
    sort(string a, float b, sort* c)
    {
        student = a;
        gpa = b;
        next = c;
    }
};

int main()
{
  
}