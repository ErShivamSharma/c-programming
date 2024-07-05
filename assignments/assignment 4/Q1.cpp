#include <iostream>
using namespace std;

class User
{
    private:
        string FirstName;
        string LastName;
    public:
        void SetUserName(string fst, string lst);
        void DisplayFullName();
        string GetFullReverseName();    
};

void User::SetUserName(string fst, string lst)
{
    FirstName = fst;
    LastName = lst;
}

void User::DisplayFullName()
{
    cout<<FirstName<<" "<<LastName<<endl;
}

string User::GetFullReverseName()
{
    string res = LastName + " " + FirstName;
    return res;
}

int main()
{   
    string first_N, last_N;
    cout<<"Input the first name->";
    cin>>first_N;
    cout<<"input the last name ->";
    cin>>last_N;
    User us1;
    us1.SetUserName(first_N, last_N);
    us1.DisplayFullName();
    cout<<"Rev Name is ->\n"<<us1.GetFullReverseName()<<endl;

    return 0;
}