#include <iostream>
using namespace std;
int scalar(int arr[3][3], int i=0, int j=0)
{
    int temp = -1;
    if(i==3)
    {return true;}
    if(i==0 && j==0)
    {temp = arr[i][j];}
    if(i==j)
    {
        if(arr[i][j]==temp)
        {
            return true;
        }
    }    
    if(i!=j)
    {
        if(arr[i][j]==0)
        {
            return false;
        }
    }

    return scalar(arr,i+=1, j+=1)
}
int main()
{
    int matrix[3][3];
    cout << "Please enter your matrix: " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> matrix[i][j];
        }
    }


    for(int c=0; c<3; c++)
    {
        for(int d=0; d<3; d++)
        {
            if(matrix[c][d]!=0)
            {
                if(matrix[0][0] == matrix[1][1] == matrix[2][2])
                {

                }
            }
        }
    }

    

}