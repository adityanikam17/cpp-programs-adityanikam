
// 14. Inline Functions - To add two numbers.

#include <iostream>

using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main() 
{
    int num1, num2;

    cout << "Enter the first number : " <<endl;
    cin >> num1;

    cout << " Enter the second number : " << endl;
    cin >> num2;

    cout << " Addition is : " << add(num1,num2) << endl;

    return 0;
}