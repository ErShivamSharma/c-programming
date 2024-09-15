#include <iostream>
using namespace std;

class FirstPrimeNum
{
private: 
    // Will check if given number is prime or not
    bool isPrimeNumber(int num);
public:
    FirstPrimeNum(){}
    void GetFirstNPrimeNumbers(int num); 
};

bool FirstPrimeNum::isPrimeNumber(int a)
{  
    int i = 2;
    bool isPrime = true;
    
    if ( a <= 1)
    {        
        isPrime = false;
    }

    while(i < a)
    {
        if(( a % i) == 0)
        {
            isPrime = false;
            break;
        }

        i++;
    }

    return isPrime;
}

void FirstPrimeNum::GetFirstNPrimeNumbers(int num)
{
    int count = 0;
    int i = 1;
    do
    {
        if(isPrimeNumber(i))
        {
            cout<<i<<endl;
            count++;
        }

        i++;        
    } while (count < num);
    
}

int main ()
{   int num;
    cout<<"Enter the number->";
    cin>>num;
    FirstPrimeNum pm;
    pm.GetFirstNPrimeNumbers(num);

    return 0;
}