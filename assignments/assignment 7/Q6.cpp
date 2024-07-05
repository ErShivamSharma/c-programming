#include <iostream>
using namespace std;

class Calendar
{
private:
    int year,month;
    bool leap;

    int VerifyMonth();
    bool CheckYearIsLeap();
    int NumberOfDays();
    
public:
    Calendar() 
    {
        leap = false;
    }
    void SetData();
    void DisplayNumberOfDays();
};

int Calendar::VerifyMonth()
{
    if(month>0 &&month<=12)
    {
        return month;
    }
    else
    {
        cout<<"\nInvalid Month\n";
        return 0;
        
    }
}

bool Calendar::CheckYearIsLeap()
{
    if (year % 400 == 0) 
    {   
        leap = true;
        return leap;
    }
    else if (year % 100 == 0) 
    {
        leap =false;
        return leap;
    }
    else if (year % 4 == 0) 
    {
        leap = true;
        return leap ;
    }
    else 
    {
        return leap=false;
    }
}

int Calendar::NumberOfDays()
{   
    CheckYearIsLeap();

    if(month == 2)
    {
        if(leap)
            return 29;
        else
            return 28;
    }
    else
    {
        if((month %2) == 0)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }
}
void Calendar::SetData()
{   
    cout<<"Input year->";
    cin>>year;
    cout<<"Input month->";
    cin>>month;    
    VerifyMonth();
    
}

void Calendar::DisplayNumberOfDays()
{
    cout<<"\nNumber of days of the year "<< year<<" and "<<month<<" month is:"<<NumberOfDays()<<endl<<endl;
}

int main()
{
    Calendar cal;
    cal.SetData();
    cal.DisplayNumberOfDays();
    
    return 0;
}