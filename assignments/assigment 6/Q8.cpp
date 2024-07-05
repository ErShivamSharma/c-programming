#include<iostream>
using namespace std;


enum TriangleType 
{
    Equilateral,
    Isosceles,
    Scalene
};

class Triangle
{   
private:
    int s1,s2,s3;
    
public:
    Triangle(){}
    Triangle(int a,int b,int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    TriangleType GetTriangleType();
};

TriangleType Triangle::GetTriangleType()
{
    if(s1==s2 && s2==s3)
    {
        return TriangleType::Equilateral;
    }
    else if(s1==s2||s2==s3||s1==s3)
    {
        return TriangleType::Isosceles;
    }
    else
    {
        return TriangleType::Scalene;
    }    
}

string TriangleTypeToString(TriangleType ttype)
{
    switch (ttype)
    {
    case TriangleType::Isosceles:
        return "Isoscale";
        break;
    case TriangleType::Equilateral:
        return "Equilateral";
    
    default:
        return "Scalene";
        break;
    }
}

int main()
{   int a,b,c;
    cout<<"Enter the three Sides of triangle->";
    cin>>a>>b>>c;
    Triangle T1(a,b,c);

    cout<<"triangle is "<<TriangleTypeToString(T1.GetTriangleType())
    <<endl;
    return 1;
}