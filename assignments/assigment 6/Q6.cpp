#include <iostream>
using namespace std;


class Car
{
    private:
        int year;
        char company[20],model[50];
    public:
        void SetData()
        {   
            cout<<"Enter the company:";
            cin>>company;
            cout<<"Enter the model:";
            cin>>model;
            cout<<"Enter the year:";
            cin>>year;
            
            
        }
        void GetData()
        {   cout<<"Car Details->"<<endl;
            cout<<"Company name: "<<company<<endl;
            cout<<"Model       : "<<model<<endl;
            cout<<"Year        : "<<year<<endl;
        }
};
int main()
{
    Car R1;
    R1.SetData();
    R1.GetData();
    return 0;
}