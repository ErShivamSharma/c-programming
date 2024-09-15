#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout<< "Enter 2 numerical values to be compared" << endl;
    cin >> num1 >> num2;
    cout << "First value is : " << num1  << endl;
    cout << "second value is : " << num2 << endl; 
    if(num1>num2)
        cout << num1 << " is greater than " << num2 << endl;
    else if (num1 < num2)
    {
        cout << num1 << " is less than " << num2 << endl;
    }
    else if (num1==num2)
    {
        cout << num1 << " is equal to " << num2 << endl;
    }
    
    

    return 0;
}