#include <iostream>
using namespace std;

void lists(int arr[], int n, int j)
{
    for(int i = n - 1; i > j; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[j] = 12;
}

int main()
{
    int n = 7;
    int choice = 4;
    int arr[] = {2, 3, 5, 6, 7, 8};

    lists(arr, n, choice);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
}