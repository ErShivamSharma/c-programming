

// Example: define member function without argument within
// the class
 
#include <iostream>
using namespace std;
 
class Person {
    int id;
    char name[100];
 
public:
    Person(){ cout << "in constructor Person" << endl ;}
    void set_p()
    {
        cout << "Enter the Id:";
        cin >> id;
        cout << "Enter the Name:";
        cin >> name;
    }
 
    void display_p()
    {
        cout << endl <<"Id: "<< id << "\nName: " << name <<endl;
    }
};
 
class Student : private Person {
    char course[50];
    int fee;
 
public:
    Student(){ cout << " In constructor Student " << endl; }
    void set_s()
    {
        set_p();
        cout << "Enter the Course Name:";
        cin >> course;
        cout << "Enter the Course Fee:";
        cin >> fee;
    }
 
    void display_s()
    {
        display_p();
        cout <<"Course: "<< course << "\nFee: " << fee << endl;
    }
};
 
 /*Constructor of the base class initializes all stuff inherited from it by derived class. 
 Then constructor of derived class initializes only stuff explicitly declared in the derived class. 
 So to completely initialize derived class, you first need to call constructor of the base class.*/
 
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}