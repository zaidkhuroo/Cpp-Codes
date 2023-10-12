#include <iostream>
using namespace std;
int main()
{
    try
    {
        cout << "i am here" << endl; 
        throw 1;
        cout << "i am not printed"<<endl;
    } 
    catch (int x)
    {
        cout << "i am finally printed" << endl;
    }
    return 0;
}
