#include <iostream>
using namespace std;

int main()
{
    int r,h;
    cout<<"Input the radius of cylinder :";
    cin>>r;
    cout<<"Input the height of cylinder :";
    cin>>h;

    float vol = 3.14*(r*r)*h;
    cout<<"The volume of cylinder :"<<vol<<endl;
    return 0;
}