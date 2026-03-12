
// 30. Polymorphism - Compile Time Polymorphism

// Polymorphism means Many Forms
// Types - 1. Compile time Polymorphism (Also called Overloading)
        // 2. Runtime Polymorphism (Also call Overridding).

#include<iostream>

using namespace std;

class Math
{
    public:
        int add( int a, int b )
        {
            return a+b;
        }

        int add ( int a, int b, int c )
        {
            return a+b+c;
        }

        float add ( float a, float b )
        {
            return a+b;
        }
    };

int main()
{
    Math obj;

    cout << "Add 2 integers : " << obj.add(10,20) << endl;
    cout << "Add 3 integers : " << obj.add(10,20,30) << endl;
    cout << "Add 2 floats : " << obj.add(10.23f, 20.27f) << endl;

    return 0;
}

