#include <iostream>
#include <ctime>
using namespace std; 

class Date
{   private:
    tm* ltm;
    public:
    Date()
    {
        time_t now = time(0);
        ltm= localtime(&now);
    }
    void DisplayDate()
    {
          // print of date in date:month:year  
        cout << "Current date: " << ltm->tm_mday;  
        cout << "/" << 1 + ltm->tm_mon; 
        cout << "/" << 1900 + ltm->tm_year << endl; 
    
    }

};

int main() 
{

Date obj;
obj.DisplayDate();

return 0;
}  

    
