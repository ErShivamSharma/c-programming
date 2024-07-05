#include <iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Input the radius of sphere :";
    cin>>r;

    float vol = 1.3333333*3.14*(r*r*r);
    cout<<"The volume of sphere is :"<<vol<<endl;
    return 0;
}