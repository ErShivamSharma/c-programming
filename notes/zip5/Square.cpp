#include <iostream>
using namespace std;
class square
{
    int x;   // data member
    public:
    int area(int);  //member function
};
int square :: area(int a){      //:: is a scope resolution operator. It specifies that area is not global function but it is member function of class
    x = a;
    return x*x;
}
main(){
    square sqr;     // sqr is the object of class square
    cout << "Area of square is " << sqr.area(4) << endl;     //here we are calling function area using the object sqr and dot operator
    return 0;
}
