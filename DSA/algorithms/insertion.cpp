#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3, 5, 6, 8 ,7 ,9, 1};

    for(int j = 1; j<7; j++)
    {
        int temp = arr[j];

        for(int i = j; i > 0 && arr[i] < arr[i-1]; i--)
        {
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }

    for(int i = 0; i<7; i++)
    {
        cout << arr[i] << endl;
    }
}