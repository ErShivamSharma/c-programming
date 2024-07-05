#include <iostream>
using namespace std;
int main()
{
    int a,b,angle;
    cout<<"Input the 1st angle :";
    cin>>a;
    cout<<"Input the 2nd angle :";
    cin>>b;
    
    angle = 180-(a+b);

    cout<<"the third angle is :"<<angle<<endl;

    return 0;
}