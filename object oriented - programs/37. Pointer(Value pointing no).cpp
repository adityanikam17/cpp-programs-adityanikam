
// 37. Pointer - value of number pointing array

#include<iostream>

using namespace std;

int main()
{
    int num =10;
    int * ptr;
    ptr = &num;

    cout << " Addrss of num (&num): " << &num << endl;

    cout << "Value of number : " << num << endl;
    cout << "Value stored in pointer : " << ptr << endl;
    cout << "Value pointed by *ptr : " << *ptr << endl;

    return 0;
}