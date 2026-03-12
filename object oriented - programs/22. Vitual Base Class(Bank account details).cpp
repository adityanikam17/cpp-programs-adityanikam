
// 22. Virtual Base Class - Bank Account Details.

#include <iostream>

using namespace std;

class Account
{
    public: 
    string bank;

    void setname()
    {
        cout << "Enter the bank of the customer : " << endl;
        cin >> bank;
    }
};

class Saving : virtual public Account
{
    public:
    float sbal;

    void savebal()
    {
        cout << "Balance is saving account : "<<endl;
        cin >> sbal;
    }
};

class Current : virtual public Account 
{
    public:
    float cbal;

    void curbal()
    {
        cout << "Balance in current account : "<< endl;
        cin >> cbal;
    }
};

class Customer : public Saving, public Current 
{
    public:
    float balance;

    void display()
    {
        balance = cbal + sbal;
        cout << "Account Balance : "<< balance << endl;
    }
};

int main()
{
    Customer c;
    c.setname();
    c.savebal();
    c.curbal();
    c.display();

    return 0;
}