#include <iostream>
using namespace std;

int main()
{   
    int num1 =5 ,num2 = 7 ;
    float num3 = 3.7, num4 = 8.0;
    
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num3<<"+"<<num4<<"="<<num3+num4<<endl;

    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num3<<"-"<<num4<<"="<<num3-num4<<endl;
    cout<<num1<<"-"<<num4<<"="<<num1-num4<<endl;

    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num3<<"*"<<num4<<"="<<num3*num4<<endl;
    cout<<num1<<"*"<<num4<<"="<<num1*num4<<endl;

    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    cout<<num3<<"/"<<num4<<"="<<num3/num4<<endl;
    cout<<num1<<"/"<<num4<<"="<<num1/num4<<endl;
    
    return 0;
}