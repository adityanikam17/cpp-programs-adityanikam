
// 24. Functions - With Return type and No parameter passing.

#include <iostream>

using namespace std;

int add()
{
    int a,b;
    cout << " Enter the 2 numbers : " << endl;
    cin >> a >> b ;
    return a+b;
}

int main ()
{
    cout << " Sum is : " << add();
    return 0;
}