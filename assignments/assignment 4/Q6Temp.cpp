#include <iostream>
using namespace std;

class BinaryNumber
{   
private:
    int bin1[2];
    int bin2[2];
    int len = sizeof(bin1)/sizeof(bin1[0]);
    int carry = 0;
    int dec = 0;
    int sum[3];

public:
    void SetBinary();
    void addition();
    void Display();

};
void BinaryNumber::SetBinary()
{   
    cout<<"Enter The binary number\n";
    for(int i=0;i<len;i++)
    {
        cin>>bin1[i];
    }
    cout<<"Enter The binary number\n";
    for(int i=0;i<len;i++)
    {
        cin>>bin2[i];
    }
}
void BinaryNumber::addition()
{   
    for(int i = len-1; i>=0; i--)
    {
        int temp = bin1[i] + bin2[i] + carry;
        if(temp > 1)
        {
            carry = 1;
            temp = temp %2;
        }

        sum[i+1] = temp;
    }
    
    sum[0] = carry;
}

void BinaryNumber::Display()
{
    for(int i=0; i<= len; i++)
    {
        cout<<sum[i];

    }   

    cout<<endl;
}

int main()
{
    BinaryNumber bin;
    bin.SetBinary();
    bin.addition();  
    cout<<"addition of two binary ->"; 
    bin.Display();
    return 1;
}