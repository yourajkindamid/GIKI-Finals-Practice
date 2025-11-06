#include <iostream>
using namespace std;

void lists(int arr[], int n, int a)
{
    for(int i = a; i < n; i++)
    {
        arr[i] = arr[i+1]; 
    }
}