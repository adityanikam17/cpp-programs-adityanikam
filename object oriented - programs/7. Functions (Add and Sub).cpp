
// 7. Functions - Add and Sub.

#include<iostream>

using namespace std;

class sum
{
    public:
    int a,b;
    int add, sub;

    void addition()
    {
        cout << " Enter the two numbers : " <<endl;
        cin >> a >> b;
        add= a+b;
        cout << " Addition of numbers is : " << add << endl;
    }

    void subtraction()
    {
        cout << " Enter the two numbers : " << endl;
        cin >> a >> b;
        sub = b -a;
        cout << " Subtraction of numbers is : " << sub << endl;
    }

};
int main()
{
    sum s1,s2;

    s1.addition();
    s1.subtraction();
    
    s2.addition();
    s2.subtraction();
    
}