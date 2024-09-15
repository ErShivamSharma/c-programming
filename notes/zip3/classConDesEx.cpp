#include<iostream>
#include<string.h>
using namespace std;
 
class String1 {
/*private:
    char* s;
    int size;
 */
public:
    char* s;
    int size;
    String1(char*); // constructor
    ~String1(); // destructor
};
 
String1::String1(char* c)
{
    size = strlen(c);
    s = new char[size + 1];
    strcpy(s, c);
}
String1::~String1() { delete[] s; }
 
 /*In this program we have created array of object dynamically. 
 The first object is ptr[0], second is ptr[1] and so on . 
 For each object creation default constructor is called and 
 for each object memory is allocated to pointer type variable by new operator.*/
int main()
{
    String1 str = "Hello, World!";
    String1 myString(str);
    cout << "String: " << myString. s << endl;
    return 0;
}