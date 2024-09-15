#include <iostream>
using namespace std;

class SimpleInterest
{
    private:
    float si,t;
    int p,r;
        
    public:
    void SetData()
    {
       
        cout<<"Input the Principal ->";
        cin>>p;
        cout<<"Input the Rate of Interest->";
        cin>>r;
        cout<<"Input the Time->";
        cin>>t;
    }
    void GetSI()
    {   
        int temp = (p*r*t);
        si = temp/100;
    }
    void display()
    {
        cout<<"the Simple Interset for the amount "<<p<<" for "<<t<<" year @ "<<r<<" is :"<<si<<endl;
    }
    
};


int main()
{   
    SimpleInterest obj;
    obj.SetData();
    obj.GetSI();
    obj.display();

    return 0;

}