#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int result,w,l;
    public:
    Rectangle(){}
    Rectangle(int a,int b)
    {
        w = b;
        l = a;
    }
    void Area();
    void Display();
};
void Rectangle::Area()
{
 result = l*w;

}
void Rectangle::Display()
{
    cout<<result<<endl;
}

int main()
{
    int length,width;
    cout<<"Enter the length of Rectangle:";
    cin>>length;
    cout<<"Enter the Width of Rectangle:";
    cin>>width;
    Rectangle obj(length,width);
    obj.Area();
    cout<<"The Area of Rectangle:";
    obj.Display();
}