
// 20. Virtual Base Class - Find Value of X.

#include <iostream>

using namespace std;

class A         // Base class 
{
    public:
        int x;
};

class B : virtual public A{};       // Class B inherits from A 

class C : virtual public B {};      // Class C inherits from A

class D : public B, public C {};    // Class d inherits from B and C,   D has only one shared A

int main()
{
    D obj;          // Object is created

    obj.x=50;

    cout << "Value of X is : "<< obj.x;

    return 0;
}