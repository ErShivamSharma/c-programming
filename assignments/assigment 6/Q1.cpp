#include <iostream>
using namespace std;

class student
{
private:
    int admno;
    char sname[20];
    float eng,math,science,total;

    float ctotal();
public:
    void SetData();
    void ShowData();
};

float student::ctotal()
{
    total = eng+math+science;
    return total;
}

void student::SetData()
{
    cout<<"Enter the admisson number->";
    cin>>admno;
    cout<<"Enter the student name->";
    cin>>sname;
    cout<<"Enter the mark of english->";
    cin>>eng;
    cout<<"Enter the mark of mathematics->";
    cin>>math;
    cout<<"Enter the mark of science->";
    cin>>science;
    ctotal();
}

void student::ShowData()
{   
    cout<<"\n**********************************\n";
    cout<<"student details\n";
    cout<<"Admisson number "<<admno<<endl;
    cout<<"student name "<<sname<<endl;
    cout<<"Entered mark in english "<<eng<<endl;
    cout<<"Entered mark in mathematics "<<math<<endl;
    cout<<"Entered mark in science "<<science<<endl;
    cout<<"Total of the mark in subjects "<<total<<endl;
    cout<<"\n**********************************\n";
}

int main()
{
    student stu1;
    stu1.SetData();
    stu1.ShowData();
    return 0;
}