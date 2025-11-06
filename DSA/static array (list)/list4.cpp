#include <iostream>
using namespace std;

void lists(int arr[], int a, int b)
{
    for(int i = b; i < a - 1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{

    int n = 6;
    int arr[] = {2, 3, 5, 6, 7, 8};

    lists(arr, n, 3);

    for(int i = 0; i < n-1; i++)
    {
        cout << arr[i] << endl;
    }
}