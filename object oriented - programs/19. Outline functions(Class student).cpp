
// 19. outline Function - Class of studen to store name and roll number.

#include <iostream>

using namespace std;

class Student
{
    public:
    int rollno;
    string name;
    
    void getData();
    void displayData();
};

void Student :: getData()
{
    cout << "-----Enter Student's Name and Roll Number----- : " << endl;
    cin >> name >> rollno;
}

void Student :: displayData()
{
    cout << "Student Name is : " << name << endl;

    cout << "And Roll Number is : " << rollno << endl;
}

int main()
{
    Student s1, s2;

    s1.getData();
    s1.displayData();

    s2.getData();
    s2.displayData();

    return 0;
}

