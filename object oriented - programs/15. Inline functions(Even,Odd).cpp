
// 15. Inline Functions - to find even, odd numbers .

#include <iostream>

using namespace std;

inline int even (int n)
{
    return n % 2 == 0;
}

int main()
{
    int num;

    cout << "Enter the number : " << endl;
    cin >> num;

    if (even(num))
        cout << " Number is even !! "<< even << endl;
    
    else 
        cout << " Number is odd !! " << endl;

    return 0;
}