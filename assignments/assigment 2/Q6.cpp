#include <iostream>
using namespace std;
void swap(int * x,int * y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main()
{
    int a,b;
    int *x,*y;
    cout<<"Input 1st number :";
    cin>>a;
    cout<<"Input 2nd number :";
    cin>>b; 
    
    swap(&a,&b);
    
    cout<<"after swap 1st number is:"<<a<<"\nafter swap 2nd number is:"<<b<<endl;
    return 0;
}