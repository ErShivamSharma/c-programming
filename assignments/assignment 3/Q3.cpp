#include <iostream>
using namespace std;

int main()
{   
    for(int i=0 ;i<=26;i++)
    {   
        int pat = 'A';

        for(int j=0;j<i;j++)
        {
            cout<<char(pat+j); 
        }
        cout<<"\n";
          
    }
    return 0;

}