// C++ Program to demonstrate working of
// function using pointers
#include <iostream>
using namespace std;
 
 void fun1(int x)
{
    // definition of function
    x = 30;
}
void fun2(int* ptr) { *ptr = 30; }
 
int main()
{
    int x = 20;
    fun1(x);
    cout << "x = " << x << endl;   //the value of x is not modified using the function fun().
    cout << "the value of x is not modified using the function" << endl;

    fun2(&x);
    cout << "x = " << x << endl; //the value of x is modified using the function fun().
    cout << "the value of x is modified using the function" << endl;
 
    return 0;
}