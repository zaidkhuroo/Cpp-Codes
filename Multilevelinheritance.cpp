#include <iostream>
using namespace std;
class hey
{
    int a;

public:
//     function definition to to enter value using function nam red
    void red()
        
    {
        cout << "Enter value" << endl;
        cin >> a;
    }
    void display()
    {
        cout << "Value is" << a << endl;
    }
};
class orange:public hey
{
    int b;

public:
    void red_s() 
    {
        cout << "Enter value" << endl;
        cin >> b;
    }
//     function definition to display elements.
    void display_s()
    {
        cout << "Value is" << b << endl;
    }
};
class New:public orange{
public:
void top()
{
cout<<"i am new"<<endl;
}
};
int main(){
    New p;
    p.top();
    return 0;
}
