#include <iostream>
using namespace std;

class Cube
{
    private:
    int result,side;
    public:
    Cube(){}
    Cube(int a)
    {
        side = a;
    }
    void Volume();
    void Display();
};
void Cube::Volume()
{
 result = side*side*side;

}
void Cube::Display()
{
    cout<<result<<endl;
}

int main()
{
    int s;
    cout<<"Enter the side of cube:";
    cin>>s;
    Cube obj(s);
    obj.Volume();
    cout<<"the volume of cube:";
    obj.Display();
}