#include <iostream>
using namespace std;

class calculator
{
    private: float a,b,result;

    public:
    calculator()
    {}
    calculator(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void operation()
    {
        char opr;
        do
        {
        bool resValid = true;
        cout<<"ADD  = '+' Subtract = '-'Multiply = '*' Divide ='/' Exit = Q";
        cout<<"\nEnter operation ";
        cin>>opr;
        switch (opr)
        {
            case '+':
                result = a+b;
                break;
            case '-':
                result = a-b;
                break;
            case '*':
                result = a*b;
                break;
            case '/':
                result = a/b;
                break;   
            case 'Q':
                return ;
            default :
            cout<<"invalid input\n";
                resValid = false;
                break;
        }

        if(resValid == true)
        {
            cout<<"Result = "<< result<<endl;
        }
        else 
        {
            cout<<"Re-check the operation\n";
        }

    } while (true);
    
    
   }
};

int main()
{   ;
    int num1,num2;
    cout<<"Enter two number :";
    cin>>num1;
    cin>>num2;

    calculator cal(num1, num2);
    cal.operation();

}    