#include<iostream>
using namespace std;
class newone 
{
    int a,b,c;
    public:
    newone(); //constructor decleration
void print()
{
    cout<<a<< "+" <<b<< "=" <<c<<endl;
}
};
newone:: newone()
{
    a=10;
    b=20;
    c=a+b;
}

int main() 
{
    newone c;
    c.print();
    return 0;
}
