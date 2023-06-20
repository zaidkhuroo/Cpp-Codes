#include <iostream>
using namespace std;
class hey
{
   

public:
    virtual void red()
    { 
        cout << "value" << endl;
       
    }
   
};
class orange:public hey
{

public:
    void red()
    {
        cout << "no value" << endl;
        
    }

};
int main(){
    hey *ptr;
    orange t;
    ptr=&t;
    ptr->red();
    return 0;
  
}
