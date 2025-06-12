#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    private:
    string name;
    int id;
    float marks[3];

    public:
    Student(string name, int id, float m1, float m2, float m3)
    {
        this -> name = name;
        this -> id = id;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    float operator+(const Student& obj)
    {
        float total;

        for(int i=0; i<3; i++)
        {
            total = marks[i] + obj.marks[i];   
        }   
        float average = total/6;
        return average;
    }

    void saveToFile()
    {
        fstream file("student.txt", ios::app);
        //no need to reopen file.open("student.txt");

        file << "Student " << id << ": ";
        file << name << ", " << marks[0] << ", " << marks[1] << ", " << marks[2];

        file.close();
    }

    void displayDetails()
    {
        cout << this->name <<", " << this->id << ", " << this->marks[0]
        << ", " << this->marks[1] << ", " << this -> marks[2];
    }

    void validateMarks()
    {
        try
        {
            for(int i=0; i<3; i++)
            {
                if(marks[i] < 0.000 || marks[i] > 100.000)
                {
                    throw out_of_range("Incorrect input for marks");
                }
            }
        }
        catch(const exception& e)
        {
            cerr << e.what() << '\n';
        }
        
    }
};

int main()
{
    try
    {
        Student s1("Alice", 101, 85.5, 90.0, 78.5);
        Student s2("uv", 112, 101, 103, 104);

        float t;
        t = s1 + s2;

        cout << "Average: " << t << endl;

        s1.saveToFile();
        s2.saveToFile();
        s1.displayDetails();
        s2.displayDetails();

        try 
        {
            s1.validateMarks();
            cout << "Student 1 marks are valid.\n";
        } 
        catch (const exception& e) 
        {
            cout << "Error in Student 1: " << e.what() << endl;
        }

        try {
            s2.validateMarks();  // This should throw
            cout << "Student 2 marks are valid.\n";
        } catch (const exception& e) {
            cout << "Error in Student 2: " << e.what() << endl;
        }
    }
    catch(const exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}