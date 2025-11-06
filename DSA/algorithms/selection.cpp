#include <iostream>
using namespace std;

int arr[] = {8, 7 , 5 , 4, 2, 1};

void swap(int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int main()
{
    for(int i = 0; i<6; i++)
    {
        int min = i;

        for(int j = i + 1; j<6; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }

        swap(min, i);
    }

    for(int i = 0; i<6; i++)
    {
        cout << arr[i] << endl;
    }
}