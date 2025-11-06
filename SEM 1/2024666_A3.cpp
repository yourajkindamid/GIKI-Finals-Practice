#include <iostream>
using namespace std;



//Functions for Task 1
    void arrayshow(int arr[], int size)     //first function; this function will show the complete array in output
    {
        for(int i=0; i<size; i++)
        { 
            cout << arr[i] << " "; 
        } 
    }

    void sum_pairs(int arr[], int size, int val)        //second function; this function will be used to calculate the pairs that add up to the user provided value
    {   int counter = 0;                                //initializing the counter so that the number of pairs can be counted
        for(int i=0; i<=size-2; i++)                    //first loop will run from the first element of the array to it's second last element
        {                                               //two loops are run so that repetition of pairs does not occur
            for(int p = i+1; p<=size-1; p++)            //second loop will run from second element of the array to the last element
            {
                if(arr[i]+arr[p]==val)                  //if-statement used to determine which elements of the array add up to the required sum
                {
                    cout << arr[i] << "," << arr[p] << endl;
                    counter++;                          //counter counting the number of times the output occurs
                }
            }
        }
        cout << "Number of pairs whose sum equal to " << val << ": " << counter << endl;
    }




//Functions for Task 2
    const int N = 3;
    void transpose_matrix(int matrix[N][N], int transpose[N][N], int N)
    {
    for(int i=0; i<N; i++)          //outer loop for row iterations of transpose matrix
            {
                for(int j=0; j<N; j++)      //inner loop for number of columns of transpose matrix
                {   
                    transpose[j][i]=matrix[i][j];      //interchanging integer j and i for transpose matrix
                }
            }
            cout << "The transpose matrix is" << endl;
            for(int q=0; q<N; q++)
            {
                for(int r=0; r<N; r++)

                {   cout << transpose[q][r] << " ";   }

                cout << endl; }
    }



//Function for Task 3
    void arrayview(int array[], int size)     //first function; this function will show the complete array in output
    {
        for(int i=0; i<size; i++)
        { 
            cout << array[i] << " "; 
        } 
    }

    void reverseArray(int arr[], int start, int end)
    {   
        int change;     //holding the previous value
        if (start >= end)  //using recursion; this will be our base case as when the the starting iteration overtakes the last iteration
        {
            return;
        }

        change = arr[start];   //holds the initial value of integer start
        arr[start] = arr[end];  //interchanging values
        arr[end] = change;

        reverseArray(arr, start + 1, end -1); //recursive call of the function so that all iterations can be interchanged
    }



int main()
{
    //first task
        int valuereq;

        int sample[]={1,2,3,4,5,6,7};

        int samplesize = sizeof(sample)/sizeof(sample[0]);      //size of the entire array divided by size of a single element within the array gives us the total number of elements
        cout << "Original array: ";
        arrayshow(sample, samplesize);                          //calling the first function
        cout << endl;

        cout << "Please enter the value whose sum you want to match: ";
        cin >> valuereq;

        cout << "Array pairs whose sum equal to " << valuereq << ":" << endl;

        sum_pairs(sample, samplesize, valuereq);                //calling the second function
        cout << endl;


    //second task
        cout << "Dimension of the square matrix: " << N;    //this will be square matrix so the number of rows and columns will be equal i.e same dimensions
        int matrix_1[N][N];
        int transpose_1[N][N];

        for(int i=0; i<N; i++)          //outer loop for the number of columns ; first array
        {
            for(int j=0; j<N; j++)      //inner loop for row iterations
            {   
                cin >> matrix_1[i][j];
            }
        }
        cout << "Your matrix is" << endl;
        for(int q=0; q<N; q++)
        {
            for(int r=0; r<N; r++)

            {   cout << matrix_1[q][r] << " ";   }

            cout << endl; }

        transpose_matrix(matrix_1, transpose_1, N);     //function call
        cout << endl;


    //third task
        int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int arraysize = sizeof(myArray)/sizeof(myArray[0]);
        cout << "The original array is: ";
        arrayview(myArray, arraysize);
        cout << endl;

        reverseArray(myArray, 0, arraysize-1);      //function call

        cout << "The reverse of the array is: ";
        for(int p = 0; p<arraysize; p++)
        {
            cout << myArray[p] << " ";
        }

}
