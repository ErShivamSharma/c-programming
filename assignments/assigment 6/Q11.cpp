#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void display()
    {
        cout<<"I m in shape";

    }
};

class rectangle: public shape
{
    public:
    void display()
    {
        cout<<"I m in rectangle ";
    }
};

int main()
{
    rectangle rec;
    rec.display();

}