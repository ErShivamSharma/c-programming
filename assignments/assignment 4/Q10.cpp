#include <iostream>
using namespace std;
class Array
{
    int size;
    int arr[100];
public:

    Array() {};
    Array(int len);
    void SetArrValue();
    void DisplayArray();
    int GetMinFromArray();
};

Array::Array(int len)
{
    size = len;
}

void Array::SetArrValue()
{
    for(int i = 0; i< size; i++)
    {
        cout<<"Enter index "<<i<<" value ->";
        cin>>arr[i];
    }
}

void Array::DisplayArray()
{
    for(int i =0; i< size; i++)
    {
        cout<<endl;
        cout<<arr[i];
    }
}

int Array::GetMinFromArray()
{
    int min = arr[0];
    int i = 0;
    while( i < size)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        i++;
    }

    return min;
}

int main()
{
    Array ar(5);
    ar.SetArrValue();
    ar.DisplayArray();
    cout<<"\n smallest element of the given array -> "<<ar.GetMinFromArray()<<endl;

    return 1;
}