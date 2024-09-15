#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void GetBinary(int num)
{
    if(num > 0)
    {
        GetBinary(num/2);
        cout<<num%2;
    }
}

int main()
{   
    int num;
    cout<<"Enter Bin num ->";
    cin>>num;
    cout<<endl;
    
    GetBinary(num);
    return 0;
}