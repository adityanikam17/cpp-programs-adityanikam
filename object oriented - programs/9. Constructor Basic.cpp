
// 9. Constructor Basic eg.

#include<iostream>

using namespace std;

class stud
{
    public:
    int rollno;
    string name;

    /* Constructor - is a special type of member function of class which executes when you create object of class.
        - it means no need to calling like other methods.
        - classname and constructor are always same.
        - No return type specification is required.
        - it initialize object of the class.
    */
    stud()
    {
        cout << "Working with the Member Function ! ";
    }
};
int main()
{
    stud obj;
}