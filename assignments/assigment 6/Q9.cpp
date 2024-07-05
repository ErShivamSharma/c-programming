#include <iostream> 
#include <string> 
using namespace std;


class Employee 
{ 
private: 
    string name;
    int employeeId; 
    int salary; 
    float performanceRating;

public:
    void SetData()
    {
        cout<<"Input employee name: ";
        cin>>name; 
        cout<<"Input employee ID: "; 
        cin>>employeeId;
        cout<<"Input employee salary: "; 
        cin>>salary; 
    }
    void SetPerformanceRating()
    {
        cout<<"Input performance rating (0.0-5.0): "; 
        cin>>performanceRating; 
    }
  
    void calculateSalary() 
    {
        if (performanceRating >= 0.0 && performanceRating <= 5.0) 
        { 
            salary *= performanceRating; 
        } 
        else
        {
            cout << "Invalid performance rating. Salary remains unchanged." << endl; 
        }
    }

   int getSalary()  
    {
      return salary; 
    }
};

int main() 
{
Employee employee; 
employee.SetData();
employee.SetPerformanceRating();

cout<<"Initial salary: "<<employee.getSalary()<<endl; 
employee.calculateSalary();
cout<<"Updated salary: "<<employee.getSalary()<<endl;

return 0; 
}