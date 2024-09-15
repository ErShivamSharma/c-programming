#include <iostream>
using namespace  std;


void  Swap(int &a,int &b)
{
    int temp = a;//creating a temp variable and storing int a in it
    a = b;       //storing b in a
    b = temp;    //storing temp in b
    
}

int main()
{

    int num1,num2;  
    //Take two number as input  
    cout<<"Enter two number";
    cin>>num1>>num2;

    //show the number before swap
    cout<<"Before Swap\n";
    cout<<"Number 1:"<<num1<<endl;
    cout<<"Number 2:"<<num2<<endl;
    
    cout<<"After Swap\n"<<endl;
    //swapping the number
    
    Swap(num1,num2);
    cout<<"Number 1:"<<num1<<endl;
    cout<<"Number 2:"<<num2<<endl;

    return 0;
}