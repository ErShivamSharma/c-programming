#include <iostream>

using namespace std;

class MyArray
{
public:
    MyArray() {};
    MyArray(int size) {
        len = size;
        arr = new int[size];
    }

    void SetValues()
    {
        cout<<"Enter the "<<len<<" elements ->\n";
        for(int i=0; i< len; i++)
        {
            cin>>arr[i];
        }
        cout<<"\n";
    }


    void DisplayValues()
    {
        cout<<"\n orignal array\n";
        for(int i=0; i< len; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<"\n";
    }
    void SumOfOddAndEven(int &odd, int& even);
private:
    int* arr;
    int len; 
};

void MyArray::SumOfOddAndEven(int &odd, int& even)
{
    odd = 0;
    even = 0;
    for(int i=0; i< len; i++)
    {
        if((arr[i]%2) == 0)
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];
        }
    }
}

int main()
{
    int len;
    cout<<"Enter total number of elements in array ";
    cin>>len;

    MyArray obj(len);
    obj.SetValues();
    obj.DisplayValues();
    
    int evenSum, oddSum;
    obj.SumOfOddAndEven(oddSum, evenSum);
    cout<<"Sum of all even and odd numbers: "<<evenSum<<", "<<oddSum<<endl;
    return 1;
}