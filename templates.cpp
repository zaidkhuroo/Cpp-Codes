#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
    return a+b;
    }
    int main(){
    
        cout<<"int sum = "<<sum(5,6)<<endl;   
        cout<<"float sum = "<<sum(1.53,6.7)<<endl;
        return 0;
    }
