#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    float result;
    num1 = 5;
    num2 =3;
    result = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << "is " << result << endl;
    result = num1 * num2;
    cout << "Product of " << num1 << " and " << num2 << "is " << result << endl;
    result = num1/num2;
    cout << "Integer Division of " << num1 << " and " << num2 << "is " << result << endl;
    result = (float) num1/num2;
    cout << "Real Division of " << num1 << " and " << num2 << "is " << result << endl;
    result = num1%num2;
    cout << "Remainder of division of " << num1 << " and " << num2 << "is " << result << endl;

    return 0;
}