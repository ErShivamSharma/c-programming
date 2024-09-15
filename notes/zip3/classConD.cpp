#include <iostream>
using namespace std;
 
// class
class XYZ {
private:
    int data;
 
public:
    // parameterized constructor with default values
    //when the default values are assigned to every argument of the parameterized constructor, 
    //it is legal to create the object without passing any parameters just like default constructors. 
    // this type of constructor works as both a default and parameterized constructor.
    XYZ(int x = 0) { data = x; }
 
    int getData() { return data; }
};
 
int main()
{
 
    XYZ obj1; // will not throw error
 
    XYZ obj2(25);
 
    cout << "First Object Data: " << obj1.getData() << endl;
    cout << "Second Object Data: " << obj2.getData()
         << endl;
 
    return 0;
}