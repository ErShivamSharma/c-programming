#include <iostream>
using namespace std;
 
int main()
{
    int x = 10; // variable declared
    int* myptr; // pointer variable
 
    // storing address of x in pointer myptr
    myptr = &x;    //The memory address of x is assigned to myptr
 
    cout << "Value of x is: ";
    cout << x << endl;
 
    // print the address stored in myptr pointer variable
    cout << "Address stored in myptr is: ";
    cout << myptr << endl;

    cout << "Address of variable x is: ";
    cout << &x << endl;
 
    // printing value of x using pointer myptr
    cout << "Value of x using *myptr is: ";
    cout << *myptr << endl;
 
    return 0;
}