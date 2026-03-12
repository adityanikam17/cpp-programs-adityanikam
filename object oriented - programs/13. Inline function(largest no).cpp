// 13. Inline Functions - To find the largest number.

#include <iostream>

using namespace std;

inline int large (int a, int b)
{
    return (a>b) ? a : b;
}

int main()
{
    int x =20, y=30;

    cout << " First number : " << x << endl;
    cout << " Second number : " << y << endl;
    cout << " largest number is : " << large(x,y) << endl;

    return 0;

}