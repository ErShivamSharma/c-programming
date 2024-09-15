#include <iostream>
using namespace std;
class calculate
{
private:
    int x,y,result;
public:
    calculate(){}//default constructor
    calculate(int num1,int num2)
    {
        x= num1;
        y = num2;
         cout<<"*****************************************\n";
        cout<<" constructor called\n";
        cout<<"*****************************************\n";
    }
    ~calculate()
    {
         cout<<"*****************************************\n";
        cout<<"destructor called\n";
        cout<<"*****************************************\n";
    }

    void Add()
    {
        result = x+y;
    }
    void Result()
    {
        cout<<x<<"+"<<y<<"="<<result<<endl;
    }
};

int main()
{   int a, b;
    cout<<"Enter the two number :";
    cin>>a>>b;
    calculate sum(a,b);
    sum.Add();
    sum.Result();

    return 0;

}