#include <iostream>
using namespace std;


class Rectangle
{
    private:
        int length,width;
        float ar,per;
    public:
        void SetData()
        {
            cout<<"Enter the Length:";
            cin>>length;
            cout<<"Enter the Width:";
            cin>>width;
            
        }
        
        void area()
        {
            ar = length*width;
        }
        void perimeter()
        {
            per = 2*(length+width);
        }
        void display()
        {
            cout<<"area of Rectangle: "<<ar<<endl;
            cout<<"perimeter of Rectangle: "<<per<<endl;
        }
};
int main()
{
    Rectangle R1;
    R1.SetData();
    R1.area();
    R1.perimeter();
    R1.display();
    return 0;
}