#include <iostream>
using namespace std;
int main()
{
    int a,b,div,rem;
    cout<<"Input the dividend :";
    cin>>a;
    cout<<"Input the divisor :";
    cin>>b;
    div = a/b;
    rem = a%b;
    cout<<"the quotient of the division is :"<<div<<endl;
    cout<<"the remainder of the division is :"<<rem<<endl;

    return 0;
}