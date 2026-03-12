
// 17. Outline Functions - Area of rectangle.

#include<iostream>

using namespace std;

int area (int length, int breadth)
{
    return length * breadth;
}

int main()
{
    int l=5;
    int b=6;
    int result = area(l,b);

    cout << "Enter Length : " << l << endl;


    cout << " Enter Breadth : " << b << endl;
   

    cout << " Area of rectangle is : " << result << endl;

    return 0;
}