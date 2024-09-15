#include <iostream>
using namespace std;
int main()
{
    float temp,F;
    cout<<"input the temperature in kelvin :";
    cin>>temp;
    cout<<"the temperature in kelvin :"<<temp<<endl;
    
    F = (temp - 273.15) * 1.8 + 32;
    cout<<"the temperature in Fahrenhiet :"<<F<<endl;

    return 0;
}