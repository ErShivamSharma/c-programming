#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int std,roll;
    public:
    Student()
    {   
        cout<<"*****************************************\n";
        cout<<"student constructor called\n";
        cout<<"*****************************************\n";
    }
    ~Student()
    {   
        cout<<"*****************************************\n";
        cout<<"student destructor called\n";
        cout<<"*****************************************\n";
    }
    void SetDetails();
    void GetDetails();

};
void Student::SetDetails()
{
    cout<<"Enter the Name of Student->";
    cin>>name;
    cout<<"Enter the Roll no of student:";
    cin>>roll;
    cout<<"Enter the Standard of student:";
    cin>>std;
    cout<<"\n";
}
void Student::GetDetails()
{
    cout<<"student detail->"<<endl;
    cout<<"student name     :"<<name<<endl;
    cout<<"student Rollno   :"<<roll<<endl;
    cout<<"student standard :"<<std<<endl;
}

int main()
{
    Student stu1;
    stu1.SetDetails();
    stu1.GetDetails();

    return 0;
}
