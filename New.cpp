#include <iostream>
using namespace std;

int Car;
int Bike;

int Vehical(int C, int B)
{
    Car = C;
    Bike = B;
    cout << Car + Bike<<endl;
    return Car + Bike;
    
}

 void change(int value) {

    Bike = 15;
}

int main() {

    int a = 20;
    cout<<Car<<" "<<Bike << endl;
    Vehical(6, 4);
    cout<<Car<<" "<<Bike << endl;
    change(14);
    cout<<Car<<" "<<Bike << endl;
    cout<<a<< endl;
    a = 30;
    cout<<a<< endl;


    
    return 0;

}