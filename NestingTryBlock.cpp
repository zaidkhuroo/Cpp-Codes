// cpp program for try and catch method
#include <iostream>
using namespace std;
 main()
{
     cout << "i am here" << endl;
    try
    {
        
        throw 100;
        cout << "i am not printed"<<endl;
    }
    catch (int x)
    {
        cout << "Finally printed" << endl;
        throw x;
    }
     catch (int y)
    {
        cout << "last print" << endl;
        
    }

}
