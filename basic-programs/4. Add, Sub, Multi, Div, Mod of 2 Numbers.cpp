
// 4th program - Add, Sub, Multi of Numbers

#include<iostream>

using namespace std;

int main()
{
    int a, b, add, sub, multi, div, mod;

    cout<<"\nEnter number for Addition: "<< endl;
    cin>> a >> b ;
    add = a + b ;
    cout<<"\nAddition of two numbers is : "<< add << endl;

   
    cout<<"\nEnter number for Subtraction: "<< endl;
    cin>> a >> b ;
    sub = a - b ;
    cout<<"\nSubtraction of two numbers is : "<< sub << endl;

   
    cout<<"\nEnter number for Multiplication: "<< endl;
    cin>> a >> b ;
    multi = a * b ;
    cout<<"\nMultiplication of two numbers is : "<< multi << endl;


    cout<<"\nEnter number for Division: "<< endl;
    cin>> a >> b ;
    div = a / b ;
    cout<<"\nDivision of two numbers is : "<< div << endl;


    cout<<"\nEnter number for Mod : "<< endl;
    cin>> a >> b ;
    mod = a % b ;
    cout<<"\nMod of two numbers is : "<< mod << endl;


    return 0;

}