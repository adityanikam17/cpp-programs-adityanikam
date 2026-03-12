
// 29. Hierarchical Inheritance.

#include<iostream>

using namespace std;

class Person
{
    public:
        void basicInfo()
        {
            cout << "I am a Person..." << endl;
        }
};

class Student : public Person
{
    public:
        void study()
        {
            cout << "I am studying!!" << endl;
        }    
};

class Teacher : public Person
{
    public:
        void teach()
        {
            cout << "I am Teaching!!" << endl;
        }
};

int main()
{
    Student s;
    Teacher t;

    s.basicInfo();
    s.study();

    t.basicInfo();
    t.teach();

    return 0;
}