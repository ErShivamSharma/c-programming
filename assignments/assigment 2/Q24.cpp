    #include <iostream>
    using namespace std;
    int main()
    {
        int a,b,sum;
        int i=3;
        while (i>0)
        {
    
        
            cout<<"Input 1st number :";
            cin>>a;
            cout<<"Input 2nd number :";
            cin>>b;
            sum = a+b;
            if (a == b)
            {
                cout<<3*sum<<endl;
            }
            else 
            {      
                cout<<sum<<endl;
            }
            i--;
        }
        return 0;   
    }