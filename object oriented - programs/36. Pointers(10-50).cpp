
// 36. Pointers - simple code 
// Pointer using an array

#include<iostream>

using namespace std;

int main()
{
    int arr[5]= {10,20,30,40,50};
    int *p = arr;
    int i;

    for (i=0;i<5;i++)
    {
        cout << *(p+i) << " " << endl;
    }
    return 0;

}