#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       //Employee(int id, string name, float salary)    
       Employee(int id1, string name1, float salary1)
        {    
            //this->
            id = id1;    
            //this->
            name = name1;    
            //this->
            salary = salary1;
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee    
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}  