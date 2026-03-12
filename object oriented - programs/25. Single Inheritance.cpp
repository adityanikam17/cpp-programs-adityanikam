
// 25. Single Inheritance

// Inheritance - All the properties of base class are inherited in derived class 
// Types - Single, Multilevel, Multiple, Hybrid, Hierarchy

#include<iostream>

using namespace std;

// base class
class Vehicle 
{
    public:
        void drive()
        {
            cout<< "This veicle can move" << endl;
        }
};

// derived class inherits from vehicle
class Car : public Vehicle 
{
    public:
        void musicsystem()
        {
            cout << "Car has a music system" << endl;
        }
};

int main()
{
    Car c;                  // create object of car
    c.drive();                  // inherited function from vehicle
    c.musicsystem();            // function of car
    return 0;
}

