
// 18. Outline Functions - Student name.

#include<iostream>

using namespace std;

class Student 
{
    public:
        void display();     // Function declaration.

};

// Outline function definition
void Student :: display()
{
    cout << " Student Name is : Raj" << endl;
}

int main()
{
    Student s ;
    s.display();
    return 0;
}