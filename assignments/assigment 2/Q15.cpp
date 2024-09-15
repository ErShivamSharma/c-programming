#include <iostream>
using namespace std;
int main()
{
    double kmhr,mlhr;
    cout<<"Input distance in kilometer : ";
    cin>>kmhr;

    mlhr = kmhr/1.6093440006147;

    cout<<"The "<<kmhr<<"km./hr. means "<<mlhr<<" Miles/hr."<<endl;

    return 0;
}