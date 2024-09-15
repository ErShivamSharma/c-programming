#include <iostream>
using namespace std;
 
class Array
{
private :
    int len;
    int *arr;
    void swap(int &a,int& b);
public:
    Array(){}
    Array(int size)
    {
        len = size;
        arr = new int[len];

    }
    ~Array()
    {delete[] arr;}
    
    void SetElement();
    void Display();
    void SortArray();
    
    void WaveArray();

};

void Array::SetElement()
{
    cout<<"Enter "<<len<<" element ->";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
}

void Array::Display()
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Array::swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Array::SortArray()
{
    for(int i=0;i<len-1 ;i++)
    {
        int min = i;
        for(int j= i+1;j<len;j++)
        {
            if (arr[min]>arr[j])
            {
                min = j;
            
            }
        }        

        swap(arr[min],arr[i]);
    }
}

void Array:: WaveArray()
{
    for (int i=0;i<len-1;i = i+2)
    {
        swap(arr[i], arr[i+1]);
    }
}

int main()
{   int n;
    cout<<"Enter the number of element->";
    cin>>n;

    Array obj(n);

    obj.SetElement();

    cout<<"unsorted array->";
    obj.Display();

    
    cout<<"\nsorted array->";
    obj.SortArray();
    obj.Display();
    cout<<"\nsorted array in wave->";
    obj.WaveArray();
    obj.Display();
    cout<<endl;
}
