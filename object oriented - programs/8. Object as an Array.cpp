
// 8.Object as an Array.

#include<iostream>

using namespace std;

class stud
{
    public:
    int rollno;
    string name;

    void get()
    {
        cout << " Enter students roll number and name :- " << endl;
        cin >> rollno >> name ;
    }

    void put()
    {
        cout << "Student roll number is : " << rollno << "\nStudent name is : " << name << endl;
    }
};

int main()
{
    stud s1[5];         // object as an array.
    int i;

    for ( i=0; i<5; i++ )
    {
        s1[i].get();
    }
    cout << " Showing the data :- " << endl;
    for ( i=0; i<5; i++ )
    {
        s1[i].put();
    }
}