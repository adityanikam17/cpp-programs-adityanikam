
// 10. Program for - Area of Triangle.

#include<iostream>

using namespace std;

int main()
{
    float base, height;
    float triangle;

    cout<<"Enter the Base and Height of Triangle : "<<endl;
    cin>> base >> height;

    triangle= 0.5 * base * height;

    cout<<"Area of Triangle is : "<< triangle<<endl;

    return 0 ;
}