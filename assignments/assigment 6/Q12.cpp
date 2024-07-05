#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
public:

  
    
    Distance operator+(Distance const& obj);
    void set();
    void display();     
};

void Distance::set() // set the the values of feet and inches
{   
    
    cout<<"Enter the Distance ->\nfeet :";
    cin>>feet;
    cout<<"inches :";
    cin>>inches;
    float inc = inches/12;
    feet +=(inches/12);
    if (inches>12)
        inches = (inc - static_cast < int > (inc))*10;
}

void Distance::display()// display the feet and inches 
{
    cout<<"\n addtion of two distance:"<<feet<<"feet "<<inches<<"inches"<<endl;
}

Distance Distance :: operator +(Distance const& obj) //overloading the opreator + to add the feet and inches

{
    Distance res;
    res.feet = feet + obj.feet;
    res.inches = inches + obj.inches;
    return res;
}


int main()
{   
    Distance obj1;
    obj1.set();
    Distance obj2;
    obj2.set();
    Distance obj3;
    
    obj3 = obj1+obj2;
    obj3.display();

}