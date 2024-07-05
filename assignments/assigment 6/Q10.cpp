#include <iostream>
using namespace std;

class Date
{
private:
    int day,month,year,date;
public:
    Date(){}
    void Set(int d,int m,int y);
    void Get();
};

void Date::Set(int d,int m,int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::Get()
{
    if ((day>0 && day<=31)== true)
    {
        if((month>0 && month<=12)== true)
        {
            if ((year>1000 && year<9999)== true)
            {   
                cout<<day<<"/"<<month<<"/"<<year<<endl;
            }   
        }
    }
    
    
}

int main()
{   int a,b,c;
    cout<<"enter the date dd:mm:yyyy->";
    cin>>a>>b>>c;
    Date obj;
    obj.Set(a,b,c);
    cout<<"enter date is ";
    obj.Get();
}