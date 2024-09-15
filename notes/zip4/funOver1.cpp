#include <iostream>
using namespace std;
void fun(int);
void fun(float);

void fun(int i) { cout << "Value of i is : " << i << endl; }

//call of overloaded ‘fun(double)’ is ambiguous
//in C++, all the floating point constants are treated as double not as a float.
/*void fun(float j)
{
      cout << "Value of j is : " << j << endl;
}
*/
//in C++, all the floating point constants are treated as double not as a float.
//this is a type conversion from float to double.
void fun(double j)
{
    cout << "Value of j is : " << j << endl;
}

int main()
{
    fun(12);
    fun(1.2);
    return 0;
}
