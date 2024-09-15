#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CompoundInterest
{
    private:
    double p,r,t,ci;
        
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
    void GetCI()
    {   
        
        float a = p*((pow((1+r/100),t)));
        ci =a - p;
    }
    void display()
    {
        cout<<"the Compound Interset for the amount "<<p<<" for "<<t<<" year @ "<<r<<" is :"<<ci<<endl;
    }
    
};


int main()
{   
    CompoundInterest obj;
    obj.SetData();
    obj.GetCI();
    obj.display();

    return 0;

}