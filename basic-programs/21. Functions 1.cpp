
// 21. Function - Without Return type and no parameter passing.

#include<iostream>

using namespace std;

void add();
void sub();

int main()
{
    add();
    sub();

}

void add()
{
    int a = 5, b=10, add;
    add=a+b;
    cout<< " Adition is : "<< add<<endl;
}

void sub()
{
    int a=10,b=5, sub;
    sub= a-b;
    cout<< " Subtraction is : "<< sub << endl;
}

