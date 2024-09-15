#include <iostream>
using namespace std;
class prime 
{
    private:
    int a;
    public:
    prime(){}
    prime(int num)
    {
        a = num;
    }
    void display();
};
void prime :: display()
{
    if(a<2)
    {
        cout<<"not a prime number";

    }
    bool isprime = true;
    int i =2;
    while(i<a)
    {
        if((a%i) == 0)
        {
            cout<<a<<"is not prime"<<endl;
            cout<<"number divisible by"<<i;
            isprime = false;
            
        }
        if(isprime)
        {
            cout<<a<<"is prime number";
            break;
        }

        i++;
    }
}
int main()
{   
    int num;
    cout<<"enter the number :";
    cin>>num;
    prime Prime(num);
    Prime.display();
    return 0;
}