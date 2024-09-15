#include<iostream>
using namespace std;
 
// Define structure
struct myStruct {
    int s1;
    char s2;
    float s3;
};
 
// Driver Code
int main()
{
    // Declaring a Structure
    struct myStruct hello;
    hello.s1 = 85;
    hello.s2 = 'G';
    hello.s3 = 989.45;
    cout << "The value is : " << hello.s1 << endl;
    cout << "The value is : " << hello.s2 << endl;
    cout << "The value is : " << hello.s3 << endl;
 
    return 0;
}