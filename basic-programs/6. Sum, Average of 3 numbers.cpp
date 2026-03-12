
// 6. Sum and Average of 3 Numbers.

#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    float sum, average;

    cout<<"Enter The 3 Numbers required : "<< endl;
    cin>> a >> b >> c ;

    sum = a+b+c;
    average= sum/3;

    cout<<"\nSum of Numbers is : "<<sum<<endl;
    cout<<"Average of Numbers is : "<<average<<endl;

    return 0;

}