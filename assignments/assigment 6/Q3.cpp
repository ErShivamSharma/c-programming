#include <iostream>
using namespace std;

class Circle
{
    private:
        int radius;
        float ar,cir;
    public:
        void SetData()
        {
            cout<<"Enter the Radius:";
            cin>>radius;
        }
        void area()
        {
            ar = 3.14*radius*radius;
        }
        void circumference()
        {
            cir = 2*3.14*radius;
        }
        void display()
        {
            cout<<"area of circle: "<<ar<<endl;
            cout<<"circumference of circle: "<<cir<<endl;
        }
};
int main()
{
    Circle C1;
    C1.SetData();
    C1.area();
    C1.circumference();
    C1.display();
    return 0;
}