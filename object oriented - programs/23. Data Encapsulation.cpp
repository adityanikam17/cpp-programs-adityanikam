
// 23. Data Encapsulation - Bank account.

#include<iostream>

using namespace std;

// Encapsulation example
class BankAccount
{
    private:
    int balance;        // private data cannot be accessed directly outside the class.

    public:
    void setBalance (int b)         // setter function to set balance
    {
        if (b>=0)                       // no negative balance to be set
            balance = b;
        else 
            balance = 0;                // if negative, set balance to 0
    }

    int getBalance()              // getter function to read function
    {
        return balance;
    }
};
int main()
{
    BankAccount account;            // create pbject of Bank account

    // account.balance = 10000; ? Not allowed ( Data is Hidden )

    account.setBalance(100000);     // set balance using setter method

    cout << "Account Balance : " << account.getBalance() << endl;           // access using getter

    return 0;
}