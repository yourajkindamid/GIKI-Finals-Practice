#include <iostream>
using namespace std;


int n = 6;
int arr[] = {1, 5, 7, 3, 9, 8};

void swap(int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;


}
int main()
{

    for(int i = 0; i<n; i++)
    {
        int change = 0;
        for(int j = 0; j<n; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(j, j+1);
                change = 1;
            }
        }
        if(change == 0)
        {
            break;
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
}