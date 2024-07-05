#include <iostream>
using namespace std;
int main()
{
    float temp,C;
    cout<<"input the temperature in Fahrenhiet :";
    cin>>temp;
    cout<<"the temperature in Fahrenhiet : "<<temp<<endl;
    
    C = (temp - 32) * 0.5555;
    cout<<"the temperature in Celsius : "<<C<<endl;

    return 0;
}