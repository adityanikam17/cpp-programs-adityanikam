
// 25. Array Declaration.

#include<iostream>

using namespace std;

int main()
{
    int arr[5];         // Declare array
    int i;

    cout << " Enter 5 numbers : "<< endl;

    for (i=0;i<5;i++)
    {
        cin >> arr[i];
    }

    cout << " Required array is : " << endl;
    for (i=0;i<5;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}