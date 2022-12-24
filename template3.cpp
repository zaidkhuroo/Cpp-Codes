#include <iostream>
using namespace std;
template <class t>
void Swap(t &a, t &b)
{
    t temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    float f1 = 10, f2 = 20;
    char c1 = 'A', c2 = 'B';
    cout << "Elemnts before swap " << endl;
  
    cout << "int values are: " << a << " " << b << endl;
    cout << "float values are: " << f1 << " " << f2 << endl;
    cout << "character values are: " << c1 << " " << c2 << endl;
    cout << endl;
    cout << "Elements after swap " << endl;
    cout << endl;
    Swap(a, b);
    Swap(f1, f2);
    Swap(c1, c2);
    cout << "int values are: " << a << " " << b << endl;
    cout << "float values are: " << f1 << " " << f2 << endl;
    cout << "character values are: " << c1 << " " << c2 << endl;
    return 0;
}