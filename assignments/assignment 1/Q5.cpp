#include <iostream>
using namespace std;
void Fahrenheit(float temp)
{
    float F;
    float Temp  = (1.8* temp)+32;
    cout<<"temperature in Fahenheit:"<<Temp<<" F"<<endl;
}

void Kelvin(float temp)
{
    float K,Temp;
    Temp = temp +273.15;
    cout<<"temperature in Kelvin   :"<<Temp<<" K"<<endl;
}

int main ()
{
    float temp,fah,Kel;
    cout<<"enter temperature in Celsius->";
    cin>>temp;
    cout<<"\n";

    Fahrenheit(temp);
    Kelvin(temp);

    return 0;

}