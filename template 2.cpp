#include<iostream>
#include<stdio.h>
using namespace std;
template <class new2,class new1>
new2 max(new2 a,new1 b)
{
if (a<b)
{
    return a;
    
}
else{
    return b;
}
}
int main(){
    cout<<"max no is= "<<max(12,4.3)<<endl; 
    cout<<"max no is= "<<max(13,65.3)<<endl;
    return 0;
}
