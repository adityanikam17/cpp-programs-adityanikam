
// 34. Template - Sum of numbers

/* Template allows us to write the generic programs that work with different data types without rewriting the code again and again. It is a blueprint for 
creating functions or classes that can work with any type of data. */

#include<iostream>

using namespace std;

template <typename T>       // template defination
T add (T a, T b)
{
    return a+b;
}

int main()
{
    cout << "Sum of integers : " << add(5,10) << endl;          // sum of 2 integers

    cout << "Sum of floats : " << add(3.5f, 4.5f) << endl;      // sum of 2 floats

    cout << "Sum of strings : " << add(string("Hello"), string("World")) << endl;

    return 0;

}