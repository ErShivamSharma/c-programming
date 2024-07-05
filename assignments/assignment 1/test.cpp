#include <iostream>
using namespace std;

int Strnlen(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
        
    }
    return i;
}
int LenString(char arr[])
{
    int size = sizeof(arr)/sizeof(char);
    return size;
}
int main()
{
    char arr[100];
    cout<<"enter the string";
    cin>>arr;
    int len = Strnlen(arr);
    int length = LenString(arr);

    cout<<"len of string "<<len<<endl;
    cout<<"len of string "<<length<<endl;
    return 0;
}