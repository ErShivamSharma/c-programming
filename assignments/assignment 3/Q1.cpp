#include <iostream>
using namespace std;
class Number
{
    private:
        int a; int m,flag =0;
    public:
        Number(){}
        Number(int num)
        {
            a =num;
        }
        void prime_no();
};

void Number:: prime_no()
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
            cout<<"Not a prime number, divisible by "<<i<<endl;
            break;
        }
        i++;
    }

    if(isPrime)
    {
        cout<<"Its a prime \n";
    }
}

int main ()
{   int num;
    cout<<"Enter the number->";
    cin>>num;
    Number Prime(num);

    Prime.prime_no();
    return 0;
}