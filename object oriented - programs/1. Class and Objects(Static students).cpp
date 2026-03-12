
// 1. Class - Static Values and class of students.

// Class - Blueprint for creating objects. 
//         Collection of various dataype used in variable and functions.

// Access Specifier - Public, Private and Protected.

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
    stud s1, s2, s3,s4;
    
    s1.rollno = 1;
    s1.name = "Vedant Patil";
    s1.percent = 83.58;

    s2.rollno = 2;
    s2.name = "Smit Pandit";
    s2.percent = 80.30;

    s3.rollno = 3;
    s3.name = "Aditya Nikam";
    s3.percent = 85.20;

    s4.rollno = 4;
    s4.name = "Vedant";
    s4.percent = 82.78;


    cout << " Data of Students :- \n"<< endl;
    cout << " First Student : " << endl;
    cout << " Student Roll number is : " << s1.rollno << endl;
    cout << " Student Name is : " << s1.name << endl;
    cout << " Student Percentage is : \n " << s1.percent << endl; 
    
    cout << " Second Student : " << endl;
    cout << " Student Roll number is : " << s2.rollno << endl;
    cout << " Student Name is : " << s2.name << endl; 
    cout << " Student Percentage is : \n " << s1.percent << endl;  

    cout << " Third Student : " << endl;
    cout << " Student Roll number is : " << s3.rollno << endl;
    cout << " Student Name is : " << s3.name << endl; 
    cout << " Student Percentage is : \n " << s3.percent << endl;  

    cout << " Fourth Student : " << endl;
    cout << " Student Roll number is : " << s4.rollno << endl;
    cout << " Student Name is : " << s4.name << endl; 
    cout << " Student Percentage is : \n " << s4.percent << endl;  

    cout << " Required Datat of Students !!!"<< endl;



}