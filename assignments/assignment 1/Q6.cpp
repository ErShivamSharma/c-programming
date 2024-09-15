#include <iostream>
using namespace std;
 float Convert_to_feet(float meter)
 {
  float feet = meter*3.28;
  return feet;
 }
 float Convert_to_inch(float meter)
 {
    float inch = meter *39.37;
    return inch;
 }

int main()
{   float len;
    cout<<"Enter the length in meter->";
    cin>>len;

    float x = Convert_to_feet(len);
    float y =  Convert_to_inch(len);

    cout<<"converted meter to feet:"<<x<<" ft"<<endl;
    cout<<"converted meter to inch:"<<y<<" inch"<<endl;
    return 0;
}