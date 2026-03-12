
// 32. Static Variable - count
// static variable keeps its value even after the function ends, created only once till program ends. 
// keyword - static.

#include<iostream>

using namespace std;

void showCount()
{
    static int count = 0;
    count ++;
    cout << "Function called " << count << " times." <<endl;
}
int main()
{
    showCount();
    showCount();
    showCount();
    showCount();

    return 0;
}