#include <iostream>
using namespace std;


void perimeter(int l,int w)
{
    int result;
    result = 2*(l+w);
    cout<<"perimeter of rectangle->"<<result<<endl;
}


void area(int l , int w)
{
    int result;
    result = l*w;
    cout<<"area of rectangle-> "<<result<<endl;
}
int main()
{
    int len,wid;
    cout<<"enter length of rectangle->";
    cin>>len;
    cout<<"enter width of rectangle->";
    cin>>wid;

    perimeter(len,wid);
    area(len,wid);

   
}