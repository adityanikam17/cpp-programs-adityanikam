
// 3. Class and Objects - Employee details.

#include<iostream>

using namespace std;

class employee
{
    public:
    int id;
    string name;
    float salary;
};
int main()
{
    employee emp1, emp2;

    cout << " Enter the details of employees :- "<< endl;
    cin >> emp1.id >> emp1.name >> emp1.salary;
    cin >> emp2.id >> emp2.name >> emp2.salary;

    cout << " Data of 1st employee :- " << endl;
    cout << " ID of employee : " << emp1.id << endl;
    cout << " Name of the employee : " << emp1.name << endl;
    cout << " Salary of employee : " << emp1.salary << endl;

    cout << " Data of 2nd employee :- " << endl;
    cout << " ID of employee : " << emp2.id << endl;
    cout << " Name of the employee : " << emp2.name << endl;
    cout << " Salary of employee : " << emp2.salary << endl;

    return 0;

}