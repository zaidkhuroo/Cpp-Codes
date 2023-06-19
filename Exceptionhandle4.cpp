//cpp program to show how the destructor is invoked when the constructer is thrown
#include<iostream>
using namespace std;
class tele{
  public:
    tele(){
        cout<<"constructor invoked"<<endl;  //this will print in s. 2 
    }
    ~tele(){
        cout<<"i am destructor"<<endl;  //as constructer is done invoked this will be printed
    }
};
int main(){
    try{
        cout<<"new here"<<endl; //this will print first
        tele t; //object creation
        throw 10;
        cout<<"am i skipped"<<endl; //this will be skipped as the throw is invoked before this statement
    }    
    catch(...){
        cout<<"dont worry i gotcha"<<endl; //this has to be printed
    }
    return 0;
}   
