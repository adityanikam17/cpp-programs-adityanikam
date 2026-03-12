
// 14. Sum, average using for loop.

#include<iostream>

using namespace std; 

int main()
{
    int n,i;
    float sum=0, num;

    cout<<"Enter the Numbers : "<<endl;
    cin>>n;

    for (i=1;i<=n;i++)
    {
        cout<<"Enter the number : "<< i << ":";
        cin >> num;
        sum = sum + 1;

    }

    float average = sum/n;

    cout << " Sum is : "<< sum << endl;
    cout << " Average is : "<< average << endl;

    return 0;

}