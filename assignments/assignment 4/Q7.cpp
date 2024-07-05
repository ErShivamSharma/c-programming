#include <iostream>
    using namespace std;
    class Array
    {
    private:
    int *arr,len,max =0;
    public:
    Array(){}
    Array(int size)
    {
        len = size;
        arr = new int[len];
    }
    ~Array()
    {
        delete[] arr;
    }
    void SetElement()
    {   
        for(int i=1;i<=len;i++)
        {
            cout<<"enter "<<i<<" element of array->";
            cin>>arr[i];
        }
    }

    void GetLlargest()
    {   
        
        for(int i = 1;i<=len;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
        }
        
    }
    void Display()
    {
        cout<<"the largest element  of array ->"<<max;

    }
    
    
};

int main()
{   
    int n ;
    cout<<"enter number of element";
    cin>>n;
    

    Array obj(n);
    obj.SetElement();
    obj.GetLlargest();
    obj.Display();
    

}