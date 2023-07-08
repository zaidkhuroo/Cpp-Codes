
#include <iostream>
using namespace std;

class test
{
    int a, b, c;

public: 
    test(int x = 10, int y = 20, int z = 30)
    {
        a = x;
        b = y;
        c = z;
    }

    void show()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    test t1(1, 2, 3);
    t1.show();
    test t2(1, 2);
    t2.show();
    test t3(1);
    t3.show();
    test t4;
    t4.show();
    return 0;
}
