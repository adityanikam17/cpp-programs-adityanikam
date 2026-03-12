
// Find Largest number using if,else.

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the 3 numbers : "<< endl;
    cin>>a>>b>>c;
    cout<<"Enter the 3 numbers : "<<a<<b<<c<<endl;

    if( (a>b) && (a>c) )
    {
        cout<<"\n a is the largest number !";
    }
    else if ( (b>a) && (b>c) )
    {
        cout<<"\n b is the largest number !";
    }
    else if ( (c>a) && (c>b) )
    {
        cout<<"\n c is the largest number !";
    }
    else
    {
        cout<<"\n All numbers are Equal !";
    }

    return 0;
}