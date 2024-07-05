#include <iostream>
using namespace std;

class Number
{

public:
    int Power(int num, int pow)
{
    if(pow > 0)
    {
        int temp = num * Power(num, pow-1);
        return temp;
    }
    else
    {
        return 1;
    }
}
};

int main()
{   
    int n,exp;
    cout<<"enter number ->";
    cin>>n;
    cout<<"enter the power ->";
    cin>>exp;

    Number num;
    
    cout<<"power of "<<n<<" is "<<num.Power(n,exp)<<endl;
    return 0;
}