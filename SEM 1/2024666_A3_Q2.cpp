#include <iostream>
using namespace std;
int main()
{
    int dimensions;
    int arr[0];
    cout << "For N = ";
    cin >> dimensions;

    cout << "Enter the elements of the matrix: ";
    for(int i=1; i<=dimensions; i++)
    {
        for(int p=0; p<=dimensions-1; p++)
        {
            cin >> arr[0+p];
        }
    }

}