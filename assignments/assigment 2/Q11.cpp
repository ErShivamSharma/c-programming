#include <iostream>
using namespace std;

void Area(int r,double& area)
{
 area  =  3.14*r*r;
}
void Circumference(int r,double& circumference)
{
    circumference = 2*3.14*r;
}
int main()
{
    int r;
    double circumference,area;
    cout<<"Input the radius(1/2 of diameter) of circle :";
    cin>>r;
    
    Area(r,area);
    Circumference(r,circumference);

    cout<<"The area of circle :"<<area<<endl;
    cout<<"The circumference of circle :"<<circumference<<endl;
    return 0;
}