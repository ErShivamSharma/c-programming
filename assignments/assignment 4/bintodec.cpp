#include <bits/stdc++.h>
using namespace std;


int main()
{
    bool bin[4] ={1,0,1,0};
    int len = sizeof(bin)/sizeof(bin[0]);

    int dec = 0;
    int mult = 1;
    
    for(int i = len-1; i >= 0; i--)
    {
        dec = dec + (bin[i] * mult);
        mult*=2;
    }

    cout<<dec<<endl;

    return 0;

}