
// 27. Multi Level Inheritance.

#include<iostream>

using namespace std;

// Base Class
class LivingBeing
{
    public:
        void Breathe()
        {
            cout << "I can Breathe !!!" << endl;
        }
};

// Derived Child Class
class Animal : public LivingBeing
{
    public:
        void walk()
        {
            cout << "I can walk..." << endl;
        }
};

// Child Class
class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "Woof! Woof!" << endl;
        }
};

int main()
{
    Dog d;
    d.Breathe();
    d.walk();
    d.bark();
    return 0;
}