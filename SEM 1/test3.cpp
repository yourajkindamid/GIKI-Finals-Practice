#include<iostream>
#include<fstream>
using namespace std;

 int arr[3][3] = {0};

void inputdata(int n,int c, int d, int e)
{
    arr[n-1][0]=c;
    arr[n-1][1]=d;
    arr[n-1][2]=e;
}

int main()
{

    char ans;
    do {
    
    int choice;
    cout << "Welcome to the wheather monitoring system" << endl;
    cout << "Please select one of these options";
    cout << "1. Input data\n 2. Display weather for a station\n 3. Display averages across all stations" << endl;
    cin >> choice;
    switch(choice)
    {
    case 1:
        int temp, humi, wind;

        cout << "Please mention which station you want to input data in"<< endl;
        int station;
         cin >>station;
        cout << endl;

        cout << "Input new temperature data" << endl;
        cin >> temp;
        cout << endl;
        cout << "Input new humidity data" << endl;
        cin >> humi;
        cout << endl;
        cout <<"Input new wind data" << endl;
        cin >> wind;

        inputdata(station, temp, humi, wind); 
        break;

        case 2:
        int number;
        cout << "Which station's data do you want?" << endl;
        cin >> number;
        cout << endl;
        for(int i=0; i<3; i++)
        {cout << arr[number-1][i] << endl; }
        break;
        }
    cout << "Would you like to engage again?Y(yes) and N(no)"<< endl;
    cin >> ans;} while(ans == 'y' || 'Y');
    
}