
// 22. Functions - Without Return type and Parameter Passing.

#include<iostream>

using namespace std;

void add(int a , int b);
void sub(int a , int b);

int main()
{
    int a , b;
    cout << " Enter the 2 numbers : "<<endl;
    cin >> a >> b;

    add(a,b);
    sub(b,a);                   // Arguement passing.
}

void add ( int a , int b )                  // Formal Parameter/ Dummy Parameter.
{
    int add;
    add= a+b;
    cout << " Addition is : "<< add << endl;
}

void sub ( int a , int b )
{
    int sub;
    sub = b-a;
    cout << " Subtraction is : "<< sub << endl;
}