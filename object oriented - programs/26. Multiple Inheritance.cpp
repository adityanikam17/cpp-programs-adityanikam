
// 26. Multiple Inheritance 

#include<iostream>

using namespace std;

// Base Class 1
class Camera
{
    public:
        void takePhoto()
        {
            cout<< "Photo Clicked!" << endl;
        }
};

// Base Class 2
class Phone
{
    public:
        void makeCall()
        {
            cout << "Calling a Friend...." << endl;
        }
};

// Derive Child Class inherits from Camera and Phone
class Smartphone : public Camera, public Phone
{
    public:
        void browseInternet()
        {
            cout << "Browsing the Internet!!!" << endl;
        }
};

int main()
{
    Smartphone s;       // create object for smartphone
    s.takePhoto();          // from camera
    s.makeCall();           // from phone
    s.browseInternet();     // from smartphone
    return 0;
}
