#include <iostream>
#include <conio.h>
using namespace std;
// void print();

class stream 
{ 
    int a, b;

public:
    stream(int a, int b) // decalring constructor
    {
        (*this).a = a;
        (*this).b = b;
    }

    stream(stream &old) // copy constructor 
    {
        a = old.a;
        b = old.b;
    }
    void print()
    {
        cout << "a" << a << endl;
        cout << "b is" << b << endl;
      
};
int main()
{
    stream s1(21, 20);
    stream s2(s1);
    s1.print();
    s2.print();
    return 0;
}
