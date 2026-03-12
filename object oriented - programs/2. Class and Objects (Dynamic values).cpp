
// 2. Class - Dynamic Values of students.

#include<iostream>

using namespace std;

class stud
{
    public: 
    int rollno;
    string name;
    float percent;
};
int main()
{
    stud s1, s2;

    cout << " Enter the details of students : "<< endl;
    cin >> s1.rollno >> s1.name >> s1.percent;
    cin >> s2.rollno >> s2.name >> s2.percent;

    cout << " Data of first Student :- "<< endl;
    cout << " Student roll number : " <<s1.rollno << endl;
    cout << " Student Name is : " << s1.name << endl;
    cout << " Student percentage : " << s1.percent <<endl;

    cout << " \nData of second Student :- "<< endl;
    cout << " Student roll number : " <<s2.rollno << endl;
    cout << " Student Name is : " << s2.name << endl;
    cout << " Student percentage : " << s2.percent <<endl;


}