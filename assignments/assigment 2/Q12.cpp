#include <iostream>
using namespace std;
int main()
{
    float temp,F;
    cout<<"input the temperature in Celsius :";
    cin>>temp;
    cout<<"the temperature in Celsius : "<<temp<<endl;
    
    F = (1.8 * temp) + 32;
    cout<<"the temperature in Fahrenhiet : "<<F<<endl;

    return 0;
}   