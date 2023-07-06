#include <iostream>
using namespace std;
class super // abstract class
{ 
protected:
    float dl;

public:
    void get_value()
    {
        cout<<"Enter the value"<<endl;
        cin >> dl;
    }
    virtual float set() = 0; // decleration of pure virtual function
};
class tuper : public super
{
    public:
    virtual float set() //defining pure virtual function in inherited class
    {
        return dl;
    }
};
int main()
{
    tuper y;
    y.get_value();
    cout<<"value is "<<y.set()<<endl;
    return 0;
}
