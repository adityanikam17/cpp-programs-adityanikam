
// 35. Template - Find Maximum number.

#include<iostream>

using namespace std;

template <typename T>
T findMax (T a, T b)
{
    if (a>b)
        return a;
    else 
        return b;
}

int main()
{
    cout << "max of 10 and 20 : " << findMax(10,20) << endl;
    cout << "max of 4.5 and 8.3 : " << findMax(4.5,8.3) << endl;
    cout << "max of p and x : " << findMax('p','x') << endl;

    return 0;
}