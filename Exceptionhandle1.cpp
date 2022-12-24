#include<iostream>
using namespace std;
int main(){

    int a,b;
    try
    {    
        cout<<"enter two numbers"<<endl;
        cin>>a>>b;
    if(b==0) throw 0;
    
cout<<"divsion of a and b is "<<a/b<<endl;
}
catch(int x)
{
cout<<"Sorry division is not possible"<<endl;
}
return 0;
}