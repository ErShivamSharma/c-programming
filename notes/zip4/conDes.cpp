#include<iostream>
using namespace std;
 
// Class A
class A {
    int a;
 
public:
    int* ptr;
 
    // Constructor of class A
    A()
    {
        cout << "Constructor was Called!"
             << endl;
    }
 
    // Destructor of class A
    ~A()
    {
        cout << "Destructor was Called!"
             << endl;
    }
};
 
// Driver Code
int main()
{
 
    // Object Created of class A
    A a;
    /*When we create an object with class_name object_name within a block is created, 
    the object has an automatic storage duration, i.e., it will automatically be destroyed on going out of scope. */

    // Object Created of class A
     A *b = new A;
    /*when we use new class_name the object has a dynamic storage duration, 
    which means one has to delete it explicitly using delete keyword. */
    return 0;
}