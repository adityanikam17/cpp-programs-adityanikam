
// 21. Virtual Base Class (Vehicle).

#include <iostream>

using namespace std;

class Vehicle
{
    public: 
        string brand;
        
        void vehicleBrand()
        {
            cout << " Brand name is : " << endl;
            cin >> brand;
        }
};

class Car : virtual public Vehicle 
{
    public:
    int wheels=4;

    void carWheel()
    {
        cout << " Car has " << wheels << "wheels !!" << endl;
    }
};

class Bike : virtual public Vehicle 
{
    public:
    int wheels=2;
    
    void bikeWheel()
    {
        cout << " Bike has" << wheels << "wheels!! " << endl;
    }
};

class Hybrid : public Car, public Bike 
{
    public: 
    void display()
    {
        cout << "Hybrid Details : "<< endl;
        cout << "Brand is : "<< brand <<endl;
        cout << "Car wheels : "<< Car :: wheels << endl;
        cout << "Bike wheels : "<< Bike::wheels << endl;
    }

};

int main()
{
    Hybrid h;

    h.vehicleBrand();
    h.carWheel();
    h.bikeWheel();
    h.display();
    
    return 0;
}

