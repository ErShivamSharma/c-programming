#include <iostream>
#include <ctime>
using namespace std; 

int main() 
{
	
	time_t now = time(0);
    tm* ltm = localtime(&now);


    cout <<"seconds       = "<<ltm->tm_sec <<endl;  
    cout <<"Minutes       = "<<ltm->tm_min <<endl;  
    cout <<"Hours         = "<<ltm->tm_hour<<endl;  
    cout <<"Day of months = "<<ltm->tm_mday<<endl;
    cout<<"year           = "<<1900+ltm->tm_year<<endl;
    cout<<"week day       = "<<ltm->tm_wday<<endl;
    cout<<"day of the year= "<<ltm->tm_yday<<endl; 
    cout<<"day light saving= "<<ltm->tm_isdst<<endl;


    // print of date in date:month:year  
    cout << "Current date: " << ltm->tm_mday;  
    cout << "/" << 1 + ltm->tm_mon; 
    cout << "/" << 1900 + ltm->tm_year << endl; 
    
    // Print time in hour:minute:second  
    cout << "Current Time: " <<ltm->tm_hour << ":";  
    cout << ltm->tm_min << ":";  
    cout << ltm->tm_sec << endl;  

}  

    
