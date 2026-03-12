
// 4. Functions (Member functions)

#include<iostream>

using namespace std;

class stud
{
    public:
    int rollno;
    string name;
    string city;

    void studinfo()         // member function / method / instance method.
    {
        cout << " Enter student roll number , name and city : " << endl;
        cin >> rollno >> name >> city;
        cout << " Student roll number is : " << rollno << "\nName is : " << name << "\nCity is : " << city << endl; 
    }
};
int main()
{
    stud s1,s2,s3;              // s1 is the object of class / instance of class.

    s1.studinfo();
    s2.studinfo();
    s3.studinfo();

    return 0;
}