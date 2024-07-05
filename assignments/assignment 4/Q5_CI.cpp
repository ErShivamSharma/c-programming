#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CompoundInterest
{
    private:
    float ci,t,p;
    int r;

    // time is in days
    float GetSimpleIntrest(float p, float r, float time)
    {
        float temp = (p * r * time) / (365 * 100);
        return temp + p;
    }
        
    public:
    void SetData()
    {
       
        cout<<"Input the Principal ->";
        cin>>p;
        cout<<"Input the Rate of Interest->";
        cin>>r;
        cout<<"Input the Time in years ->";
        cin>>t;
    }

    float GetCI()
    {   
        // Get days from time
        int days = 365 * t;
        float princ = p;
        while(days >= 365)
        {
            princ = GetSimpleIntrest(princ, r, 365);
            days = days - 365;
        }

        princ = GetSimpleIntrest(princ, r, days);
        return (princ - p);
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
    cout<<obj.GetCI();
    obj.display();

    return 0;

}