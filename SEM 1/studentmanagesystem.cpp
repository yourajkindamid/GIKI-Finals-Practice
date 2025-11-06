#include <iostream>
#include <fstream>
using namespace std;

void displayfile(string n[], int z[], int array[][3])
{

    fstream inputuser;
        inputuser.open("text.txt", ios::out);
        for(int p=0; p<=i; p++)
        {
            for(int t=0; t<3; t++)
            {
                inputuser << n[i] << " " << z[i] << " " << array[p][t] << endl; 
            }
        }
        inputuser.close();
}

int main()
{
    int i = 0;
    int choice;
    string names[3];
    int roll[3];
    int scores[3][3];

    cout << "Welcome to the Student Management System" << endl;
    cout << "Main Menu" << endl;
    cout << "1. Add student record" << endl;
    cout << "2. Display student record" << endl;
    cout << "3. Average marks of students" << endl;
    cout << "4. Save student on a file" << endl;
    cout << "5. Display file" << endl;
    cout << "Choose an option(1-3) -> ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:

        cout << "Enter the name: ";
        cin >> names[i];
        cout << endl;

        cout << "Roll number: ";
        cin >> roll[i];
        cout << endl;

        cout << "Scores" << endl;
        cin >> scores[i][0];
        cout << endl;
        cin >> scores[i][1];
        cout << endl;
        cin >> scores[i][2];
        cout << endl;
        i++;
        
        break;

        case 2:

        for(int j=0; j<=i; j++)
        {cout << names[j] << " " << roll[j] << " ";}

        for(int z=0; z<=i; z++)
        {
            for(int s=0; s<=3; s++)
            {
                cout << scores[z][s];
            }
        }

        break;

        case 3:

        int sum = 0;
        for(int k=0; k <= i; k++)
        {
            for(int s=0; s < 3; s++)
                {
                    sum += scores[k][s];
                }
        int avg = sum/3;
        cout << avg << endl;
        }

        break;

        case 4:

       displayfile(names[], z[], array[][])


        case 5:






    }
}