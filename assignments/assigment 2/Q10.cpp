#include <iostream>
using namespace std;

void Area(int len,int wid,int& area)
{
 area  =  len*wid;
}
void Perimeter(int len,int wid,int& perimeter)
{
    perimeter = 2*(len+wid);
}
int main()
{
    int length,width,area,perimeter;
    cout<<"Input the length of rectangle :";
    cin>>length;
    cout<<"Input the width of rectangle :";
    cin>>width;
    
    Area(length,width,area);
    Perimeter(length,width,perimeter);

    cout<<"The area of rectangle :"<<area<<endl;
    cout<<"The perimeter of rectangle :"<<perimeter<<endl;
    return 0;
}