#include <iostream>
using  namespace std;

int GetMax(int *arr, int len, int max = 0, int index = 0)
{
    if(index < len)
    {
        int temp = GetMax(arr, len, arr[index], index+1);
        if(temp < arr[index])
        {
            return arr[index];
        }
        else
        {
            return temp;
        }
    }
    else
    {
        return max;
    }
}

int GetMin(int*arr,int len, int min=0,int index=0)
{
    if(len>index)
    {
        int temp = GetMin(arr,len,arr[index],index+1);
        if(temp>arr[index])
        {
            return arr[index];
        }
        else
        {
            return temp;
        }
    }
    else
    {
        return min;
    }
     
}

int main()
{   
    int len;
    int *arr;
    int max = 0;
    cout<<"Enter the Number of Element->";
    cin>>len;
    arr = new int(len);

    cout<<"Enter Element of Array->";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    cout<<"Maximum = "<<GetMax(arr,len)<<endl;
    cout<<"Minimum = "<<GetMin(arr,len)<<endl;
}
