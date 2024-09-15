#include <iostream>
using namespace std;


class Person
{
    private:
        int age;
        char country[10],name[50];
    public:
        void SetData()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the age:";
            cin>>age;
            cout<<"Enter the country:";
            cin>>country;
            
        }
        void GetData()
        {   cout<<"person details->"<<endl;
            cout<<"name   : "<<name<<endl;
            cout<<"age    : "<<age<<endl;
            cout<<"country: "<<country<<endl;
        }
};
int main()
{
    Person R1;
    R1.SetData();
    R1.GetData();
    return 0;
}