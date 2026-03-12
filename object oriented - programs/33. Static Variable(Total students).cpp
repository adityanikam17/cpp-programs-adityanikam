
// 33. Static Variable - Find total number of students.

#include<iostream>

using namespace std;

class Student
{
    private:
        string name;
        int rollno;
    
    public:
        static int totalStudents;
    
    Student(string n, int r)
    {
        name = n;
        rollno = r;
        totalStudents ++;
    }

    void display()
    {
        cout << "Name : " << name << "Roll number : " << rollno << endl;
    }

    static void showTotal()
    {
        cout << "Total students " << totalStudents << endl;
    }
};

int main()
{
    Student s1 ("Rahul", 1);
    Student s2 ("Aman",2);
    Student s3 ("Sham",3);

    s1.display();
    s2.display();
    s3.display();

    Student :: showTotal();

    return 0;
}