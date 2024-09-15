#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,sum;
    float avg;
    cout<<"Input 1st  two numbers :";
    cin>>a>>b;
    cout<<"Input last two number :";
    cin>>c>>d;
    sum = a+b+c+d;
    cout<<"total of the numbers is :"<<sum<<endl;

    avg = sum/4;
    cout<<"the average of four number is :"<<avg<<endl;

    return 0;
}