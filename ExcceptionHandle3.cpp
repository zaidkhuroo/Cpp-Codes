//cpp program to catch any kind of data type to overcome the error
#include <iostream>
using namespace std;
int main()
{
    try
    {
        cout << "hey" << endl;
        throw 'b';
        cout << "what now" << endl;
    }
    catch (...)
    {
        cout << "I am here bro" << endl;
    }
    return 0;
}
