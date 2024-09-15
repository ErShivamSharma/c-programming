#include <iostream>
using namespace std;

int main()
{   
    int num,result;
    cout<<"Enter number->";
    cin>>num;

    int add = (num + 40);
    int divide  = add/5;
    int modulus = divide%2;
    result = modulus*10;
    cout<<num<<"+40 ="<<add<<endl;
    cout<<add<<"/5 ="<<divide<<endl;
    cout<<divide<<"%2 ="<<modulus<<endl;
    cout<<modulus<<"*10 ="<<result<<endl;

    return 0;
}