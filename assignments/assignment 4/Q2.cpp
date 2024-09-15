#include <iostream>
using namespace std;
class array
{
    private:
        int len ,sume = 0,sumo =0;
        int *arr;
    public:
        array(){}
        array(int size)
        {   
            len = size;
            int *arr = new int(size);
            cout<<"enter "<<len<<" elements of array :"<<endl;
        }
        
        void set_arr_element();
        void display_orignal_arr();
        int sum_even();
        int sum_odd();
};

void array::set_arr_element()
{
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }    
}

void array::display_orignal_arr()
{  
    cout<<"orignal array:";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<"\n";
}

int array::sum_even()
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2 == 0)
        {
            sume = sume +arr[i];
             
        }
    }
    return sume;
}
int array::sum_odd()
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==1)
        {
            sumo= sumo+arr[i];
        }
    }
    return sumo;
}


int main()
{   
    int n;
    cout<<"enter number of element of array:";;
    cin>>n;
    array arr(n);
    
    arr.set_arr_element();
    arr.display_orignal_arr();
    
    int sum_even = arr.sum_even();
    int sum_odd = arr.sum_odd();

    cout<<"sum of all even and odd numbers;"<<sum_even<<","<<sum_odd;
    return 0;
}