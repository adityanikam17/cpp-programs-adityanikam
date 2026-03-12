
// 26. Function to print array elements.

#include<iostream>

using namespace std;

// Function to print array elements.
void displayArray ( int arr[], int size )
{
    cout << " Required Array Elements : " << endl;

    for ( int i=0; i<size; i++ )
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int numbers[5];     // Array declaration.
    cout << " Enter 5 numbers : " << endl;

    for ( int i=0; i<5; i++ )
    {
        cin >> numbers[i];
    }

    // Function call.
    displayArray(numbers,5);

    return 0;
}