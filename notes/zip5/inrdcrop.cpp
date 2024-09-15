#include<iostream>
using namespace std;
int main(){
    int myval;
    cout << "Enter numerical value" << "\n";
    cin>>myval;
    cout << "postfix value of the variable now is: " << myval++ << endl;
    cout << "value of the variable now is: " << myval<< endl;
    cout << "prefix value of the variable now is: " << ++myval << endl;
    cout << "value of the variable now is: " << myval << endl;

    return 0;
}