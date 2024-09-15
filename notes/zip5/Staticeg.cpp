#include<iostream>
using namespace std;

class stat1 {
    int x;  // private member
public:
  static int sum;
  
  stat1(){    //Constructor 
    x = sum++;
  }
  static void statdis(){
    cout << "Result is : " << sum << "\n";
  }
  void number(){
    cout << "Number is : " <<  x << "\n";
  }
};
int stat1 :: sum;  //to declare the static variable globally we use :: //now the storage is allocated to the variable sum and is initialized to zero
int main(){
    stat1 obj1, obj2, obj3;
    obj1.number();
    obj2.number();
    obj3.number();
    stat1::statdis();
    cout << " Now static var sum is" << obj1.sum << "\n";
    return 0;
}