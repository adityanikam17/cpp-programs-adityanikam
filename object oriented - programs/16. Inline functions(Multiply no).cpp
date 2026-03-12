
// 16. Inline Functions - To multiply two numbers.

#include <iostream>

using namespace std;

inline int multi(int a, int b)
{
    return a*b;
}

int main()
{
    int num1, num2;

    cout << " First number : " << num1 << endl;
    cin >> num1;

    cout << " Second number : " << num2 << endl;
    cin >> num2;

    cout << " Multiplication is : " << multi(num1,num2) << endl;

    return 0;
}