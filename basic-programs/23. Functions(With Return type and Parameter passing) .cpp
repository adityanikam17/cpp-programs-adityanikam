
// 23. Functions - With Return type and Parameter passing.

#include <iostream>

using namespace std;

int add ( int a , int b )
{
    return a + b;

}

int main()
{
    int a,b, sum;
    cout << " Enter the 2 numbers : " << endl;
    cin >> a >> b ;

    sum = add(a,b);
    cout << " Sum is : " << sum << endl;

    return 0;

}