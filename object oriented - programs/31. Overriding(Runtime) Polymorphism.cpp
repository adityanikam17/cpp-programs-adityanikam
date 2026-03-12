
// Runtime Polymorphism - Overriding

#include<iostream>

using namespace std;

// Base Class
class Animal
{
    public:
        virtual void sound()
        {
            cout << "Animal makes sound " << endl;
        }
};

//Child Class
class Dog : public Animal
{
    public:
        void sound() override
        {
            cout << "Dog Barks ..." << endl;
        }
};

//Child Class
class Cat : public Animal
{
    public:
        void sound() override
        {
            cout << "Cat Meowss ..." << endl;
        }
};

int main()
{
    Animal* a;          // base class pointer

    Dog d;
    Cat c;

    a=&d;
    a->sound();     // Calls dog sound

    a=&c;
    a->sound();     // Calls cat sound

    return 0;

}