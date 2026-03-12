// 12. Inline Functions - To find the square root of given number.

// Inline Functions - defined by using keyword - inline, used for small functions not complex functions.

#include<iostream>

using namespace std;

// inline function-
inline int square (int n)
{
    return n*n;
}

int main()
{
    int num;

    cout << "Enter the number : " << endl;
    cin >> num;

    cout << " Square of the number is : " << square(num) << endl;

    return 0;
}