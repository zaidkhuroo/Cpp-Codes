#include<iostream>
using namespace std;

void add(int a, int b) //function one with different args
{
    cout << "sum =" << (a+b);
}
void add(double x, double y) //function 2nd with different args but with same function name as in above
{
    cout <<endl <<"sum =" << (x+y); 
}

// main function
int main()
{
    add(10, 20);
    add(2.2, 4.8);
    return 0;
}
