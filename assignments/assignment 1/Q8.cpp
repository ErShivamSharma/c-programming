#include <iostream>
using namespace std;

void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int x,y;
    cout<<"Enter two number->";
    cin>>x>>y;

    cout<<"before swap \nnumber 1 = "<<x<<"\nnumber 2 ="<<y;

    swap(&x,&y);

    cout<<"\nafter swap \nnumber 1 = "<<x<<"\nnumber 2 ="<<y<<endl;
    return 0;
}