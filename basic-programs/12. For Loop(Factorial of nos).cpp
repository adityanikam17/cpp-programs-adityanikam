
// Factorial of numbers using While Loop

#include<iostream>

using namespace std;

int main()
{
    int no, fact=1, i=1;

    cout<<"\nEnter number :" ;
    cin>>no;

    while(i<=no)
    {
        fact = fact * i;
        i++;
    }
    cout<<"\nFactorial of number is : "<<fact;

    return 0;
}