
// 24. Data Abstraction - Shape.

#include<iostream>

using namespace std;

// Abstraction example
class Shape
{
    public:
    virtual void draw()=0;             // Pure virtual function makes this class abstract
};

// circle class implements draw() in its own way
class Circle : public Shape
{
    public:
        void draw() override
        {
            cout << "Drawing a Circle" << endl;
        }
};

// rectangle class implements draw() in different way
class Rectangle : public Shape
{
    public:
        void draw() override
        {
            cout << "Drawing a Rectangle" << endl;
        }
};

int main()
{
    Shape* shape1;              // pointer to abstract class

    shape1 = new Circle();
    shape1 -> draw();

    shape1 = new Rectangle();
    shape1 -> draw();

    delete shape1;
    return 0 ;
}