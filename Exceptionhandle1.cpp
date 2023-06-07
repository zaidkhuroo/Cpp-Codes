// adding header files
#include<iostream>
using namespace std;
int main(){

    int a,b;
//  trying an integer 
    try 
    {    
        cout<<"enter two numbers"<<endl;
        cin>>a>>b;
//         throws if the integer value is 0
    if(b==0) throw 0;
     
cout<<"divsion of a and b is "<<a/b<<endl;
}
// as the integer =0 so division with 0 would'nt take place
catch(int x)
{
cout<<"Sorry division is not possible"<<endl;
}
return 0;
}
