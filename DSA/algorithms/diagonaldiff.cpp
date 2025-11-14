#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[3][3] = {{11, 2, 4},{4, 5, 6}, {10, 8, -12}};
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int pri = 0;
    int sec = 0;
    int sec2 = 0;
    int siz = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<siz; i++)
    {
        int j = siz - 1 - i;
        for(int j = 0; j<siz; j++)
        {
            if(i == j)
            {
                pri += arr[i][j];
            }
        }
       sec2 += arr[i][j];
    }
    
    int diff = abs(pri - sec2);
    cout << "difference: " << diff << endl;
    cout << "primary diagonal: " << pri << endl;
    cout << "secondary diagonal: " << sec2 << endl;

    return 0;
}