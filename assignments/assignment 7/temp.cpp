#include <iostream>
using namespace std;

class Array
{
    private:
    int len;
    char *arr;
    public:
    Array(){}
    Array(int size)
    {
        len =size;
        arr = new char(len);

    }
    void SetArr()
    {
        cout<<"Enter the string array->\n";
        cin>>arr;
        // for(int i=0;i<len;i++)
        // {
        //     cin>>arr[i];
        // }  
    }

    int Reverse(int index )
    {
        if(index >-1)
        {
            cout<<arr[index];
            Reverse(index-1);
            
            return arr[index];
        }
        else
        return index = -1;
        

    }
};
int main()
{   
    int n;
    cout<<"enter no of element->";
    cin>>n;
    Array arr(n);
    arr.SetArr();
    arr.Reverse(n);

}