
// 38. Exception Handling - Check number is divided by zero

// Exception handling allows program to detect and handle runtime errors (called exceptions) without crashing the program.
/* Keywords used : try   - block of code that may cause an exception
                   throw - used to generate (throw) an exception
                   catch - block of code that handles an exception  
                   try...catch, catch()*/

#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter Two Numbers : " << endl;
    cin >> a >> b;

    try
    {
        if(b==0)            // check if denominator is zero
            throw b;                // throw exception if b is zero
        
        int result = a/b;       // if no error , do division
        cout << " Result : " << result << endl;
    }

    catch (int x)           // catch the exception
    {
        cout << "Error!! Division by zero is not allowed...." << endl;
    }

    cout << "Program ended successfully !!!" <<endl;

    return 0;
}