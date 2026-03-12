
// 10. Constructor - Area of rectangle.

#include <iostream>

using namespace std;

class area
{
    public:
    int len, bre, are;

    area()
    {
        cout << " Enter the value for length and breadth : "<< endl;
        cin >> len >> bre;
        are = len*bre;
        cout << " Area of rectangle is : "<< are << endl;
    }
};

int main()
{
    area a1, a2;

}