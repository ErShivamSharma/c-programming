#include <iostream>
using namespace std;

class Array
{
    private:
    int len;
    int *arr;

    public:
    Array(){}
    Array(int size)
    {
        len = size;
        arr = new int[size];
    }

    void SetElement();
    void Display();
    void GetEvenOdd();

};

void Array ::SetElement()
{   cout<<"Enter the "<<len<<" element :";
    for (int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
}

void Array ::Display()
{
    cout<<"array :";
    for (int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void Array::GetEvenOdd()
{
for(int i=0;i<len;i++)
{
    if(arr[i]%2==0)
    {
        cout<<arr[i]<<" ";
    }    
}
for(int i=0;i<len;i++)
{
    if(arr[i]%2==1)
    {
        cout<<arr[i]<<" ";
    }    
}



}

int main()
{   
    int n;
    cout<<"Enter the number of element->";
    cin>>n;
    Array obj(n);
    obj.SetElement();
    obj.Display();
    cout<<"put all even first and then odd number->";
    obj.GetEvenOdd();
    
    
    return 0;
}