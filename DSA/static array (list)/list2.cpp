#include <iostream>
using namespace std;

void lists(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    lists(arr, n);
    for(int i = 0; i < n-1; i++)
    {
        cout << arr[i] << endl;
    }
}