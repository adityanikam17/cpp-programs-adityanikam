
// 28. Hybrid Inheritance.

#include<iostream>

using namespace std;

// Base Class
class Person
{
    public:
        void introduce()
        {
            cout << "I am a Person." << endl;
        }
};

// Child Class
class student : public Person
{
    public: 
        void study()
        {
            cout << "I study subjects !!" << endl;
        }
};

// Child Class
class Teacher : public Person
{
    public:
        void teach()
        {
            cout << "I teach students !!" << endl;
        }
};

// Hybrid Child Class
class TeachingAssistant : public student, public Teacher
{
    public:
        void assist()
        {
            cout << "I help in both Teaching and Learning..." << endl;
        }
};

int main()
{
    TeachingAssistant ta;
    ta.Teacher :: introduce();
    ta.teach();

    ta.student :: introduce();
    ta.study();
    
    ta.assist();
    return 0;
}