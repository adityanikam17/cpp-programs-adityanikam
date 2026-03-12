
// 3rd program
// Cout using user defined 

#include<iostream>                                                     // "<<"- Insertion operator, ">>"- Exertion operator.

using namespace std;
                                                                                    
int main()
{
    int rollno;
    cout<<"Enter the Roll Number : "<<endl;
    cin>> rollno;

    string name;
    cout<<"\nEnter the Name : "<<endl;
    cin>> name;

    float percentage;
    cout<<"\nEnter the Percentage : "<<endl;
    cin>> percentage;
    
    double fees;
    cout<<"\nEnter the Fees : "<<endl;
    cin>> fees;


    cout<<"\nStudent Roll number is : "<< rollno;
    cout<<"\nStudent Name is : "<< name;
    cout<<"\nStudent Percentage is : "<< percentage;
    cout<<"\nStudent Fees is : "<< fees;

    return 0;

}