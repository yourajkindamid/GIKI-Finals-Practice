/*A C++ program that stores information for 5 employees (name, ID, salary) and sorts the records in descending order of salary using Bubble Sort.
After sorting, display the top three highest-paid employees.*/


#include <iostream>
using namespace std;

struct emp
{
    string name;
    string id;
    int salary;

    public:
    emp(string a, string b, int c)
    {
        name = a;
        id = b;
        salary = c;
    }
};


void swapp(int a, int b, emp c[])
{
    emp temp = c[a];
    c[a] = c[b];
    c[b] = temp;
}

int main()
{
    emp a1 = {"khan", "12a", 15000};
    emp a2 = {"lahn", "12b", 16000};
    emp a3 = {"seina", "12c", 20000};
    emp a4 = {"wide", "15s", 13500};
    emp a5 = {"rashford", "17e", 19009};

    emp arr[5] = {a1, a4, a2, a3, a5};

    cout << "Before salary based swapping: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].salary << endl;
    }

    //bubble swap
    for(int i = 0; i < 4; i++)      //a comparison between j=4 and j=5 would lead to an out-of-bounds situation
    {
        for(int j = 0; j < 4-i; j++)    //hence the parameters are set to be less than n-1 so that the max comparison would be b/w 3 and 4
        {
            if(arr[j].salary < arr[j+1].salary)     //size of the inner loop is decreased each time because the final element is always sorted
            {
                swapp(j, j+1, arr);
            }
        }
    }


    cout << "After salary based swapping: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].salary << endl;
    }

}


