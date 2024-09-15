#include <iostream>
using namespace std;
class Factorial
{
private:
  
public:
    int factorial(int n) 
    {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
    }
};

int main()
{   
    int n;
    Factorial fac;
    cout<<"enter number ->";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fac.factorial(n)<<endl;
    return 0;
}