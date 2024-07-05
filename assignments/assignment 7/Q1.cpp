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
        len =size;
        arr = new int(len);

    }
    void SetArr()
    {
        cout<<"Enter the element of array->\n";
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
        }   
    }

    int AddArr(int index=0)
    {
        if(len>index)
        {

            int temp = AddArr(index+1);
            return temp + arr[index];
        } 
        else
        {
            return 0;
        }
    }


    void DisplayArr()
    {   
        cout<<"Element of array->";
        for(int i=0;i<len;i++)
        {   
            cout<<arr[i];
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of element in array->";
    cin>>n;
    Array obj(n);
    obj.SetArr();
    obj.DisplayArr();
    cout<<endl<<"sum of array :"<<obj.AddArr()<<endl;


    return 1;
}