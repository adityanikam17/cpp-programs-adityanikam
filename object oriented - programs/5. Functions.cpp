
// 5. Functions (member Functions).

#include<iostream>

using namespace std;

class stud 
{
    public:
    int rollno;
    string name;

    void getdata()              // one function for only input.
    {
        cout << " Enter the student roll number and Name : " << endl;
        cin >> rollno >> name;
    }

    void putdata()              // one function for only output.
    {
        cout << "Student roll number is : " << rollno << "\nStudent name is : " << name << endl;
    }

};

int main()
{
    stud s1,s2; 

   /* s1.getdata();
    s1.putdata();

    s2.getdata();
    s2.putdata();
   */

    s1.getdata();
    s2.getdata();

    s1.putdata();
    s2.putdata();
}