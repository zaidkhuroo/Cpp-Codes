#include<iostream>
using namespace std;
        int count=0;
class testing{
    public:
     testing()
     {
        count++;
        cout<<"object created\n"<<count;
     }
     ~testing()
     {
        cout<<"object destructed\n"<<count;
        --count;
     }

}; 
    int main()
     {
        testing A,A1,A2,A3;
        return 0;
     }
