
// 11. Destructors.

#include <iostream>

using namespace std;

class Demo
{
    public:
    // Constructor
    Demo()
    {
        cout << " Constructor called : Object is created !!!" << endl;
    }

    // ~demo constructor of class Demo
    // runs when object is destroyed
    ~Demo()
    {
        cout << " Destructor called : Object is destroyed !!! " << endl;
    }
};

int main()
{
    cout << " Program starts..." << endl;

    Demo obj;       // constructor runs automatically here

    cout << " Inside main function, object is alive" << endl;
    
    // when main() ends, the object goes out of scope.
    // Destructor will be called automatically

    cout << " Program is about to end ..." << endl;

    return 0;
}