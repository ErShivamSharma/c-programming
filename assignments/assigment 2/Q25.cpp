#include <iostream>
using namespace std;

int main()
{
    int a;
    int i = 3;
    while(i>0)
    {
        cout<<"Input the integer number :";
        cin>>a;
        bool num = false;
        
        if(90<=a && a<=110)
        {
            num = true;
        }
        else if(190<=a && a<=210)
        {
            num = true;
        }
        else
        {
            num;
        }
        cout<<"Output :"<<num<<endl;
        i--;
    }   
}