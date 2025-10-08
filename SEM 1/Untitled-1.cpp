#include <iostream>
using namespace std;
void arrayview(int array[], int size)     //first function; this function will show the complete array in output
{
    for(int i=0; i<size; i++)
    { 
        cout << array[i] << " "; 
    } 
}

void reverseArray(int arr[], int start, int end)
{
    int i;
    if
}
/*int main()
{
    int dimension;
        cout << "Dimension of the square matrix: ";
        cin >> dimension;
        int matrix[dimension][dimension];

        for(int i=0; i<dimension; i++)
        {
            for(int j=0; j<dimension; j++)
            {   
                cin >> matrix[i][j];
            }
        }
        for(int q=0; q<dimension; q++)
        {
            for(int r=0; r<dimension; r++)

            {   cout << matrix[q][r] << " ";   }

            cout << endl; }

}
void transpose_matrix(int matrix[][N], int transpose[][N], int N)
{
  for(int i=0; i<N; i++)          //outer loop for the number of columns ; first array
        {
            for(int j=0; j<N; j++)      //inner loop for row iterations
            {   
                 transpose[j][i]=matrix[i][j];
            }
        }
        cout << "The transpose is" << endl;
        for(int q=0; q<N; q++)
        {
            for(int r=0; r<N; r++)

            {   cout << transpose[q][r] << " ";   }

            cout << endl; }
}
int main()
{
        int dimension;
        cout << "Dimension of the square matrix: ";
        cin >> dimension;                           //this will be square matrix so the number of rows and columns will be equal i.e same dimensions
        int matrix_1[dimension][dimension];
        int transpose_1[dimension][dimension];

        for(int i=0; i<dimension; i++)          //outer loop for the number of columns ; first array
        {
            for(int j=0; j<dimension; j++)      //inner loop for row iterations
            {   
                cin >> matrix_1[i][j];
            }
        }
        cout << "Your matrix is" << endl;
        for(int q=0; q<dimension; q++)
        {
            for(int r=0; r<dimension; r++)

            {   cout << matrix_1[q][r] << " ";   }

            cout << endl; }

        transpose_matrix(matrix_1, transpose_1, dimension);*/
        int main()
        {
            int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int arraysize = sizeof(myArray)/sizeof(myArray[0]);
        arrayview(myArray, arraysize);



}
