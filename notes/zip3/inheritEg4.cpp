// C++ program to demonstrate implementation
// of Inheritance
 
#include <iostream>
using namespace std;
 
// Base class
class Parent {
public:
    int id_p;
};
 
// Sub class inheriting from Base Class(Parent)
/*‘Child’ class is publicly inherited from the ‘Parent’ class 
so the public data members of the class ‘Parent’ will also be 
inherited by the class ‘Child’.*/
class Child : public Parent {
public:
    int id_c;
};
 
// main function
int main()
{
    Child obj1;
 
    // An object of class child has all data members
    // and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';
 
    return 0;
}