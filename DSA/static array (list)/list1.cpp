#include <iostream>
using namespace std;

void lists(int a[], int n)
{
    for(int i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = 12;
}

int main()
{
    int n = 7;
    int arr[] = {2, 3, 5, 6, 7, 8};

    lists(arr, n);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
}