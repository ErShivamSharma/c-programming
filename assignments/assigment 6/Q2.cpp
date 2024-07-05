#include <iostream>
using namespace std;

class batsman
{
private:
    int bcode;

    char bname[20];
    int innings,notout,runs,batavg;
    int calcavg();
public:
    void ReadData();
    void DisplayData();

};

int batsman::calcavg()
{
    batavg = runs/(innings-notout);
    return batavg;
}

void batsman::ReadData()
{   
    cout<<"Enter the Batsman code in four digtit ->";
    cin>>bcode;
    if (bcode>=1000 && bcode<=9999)
    {
        cout<<"Enter the Batsman name->";
        cin>>bname;
        cout<<"Enter innings->";
        cin>>innings;
        cout<<"Enter total runs->";
        cin>>runs;
        cout<<"Enter notouts->";   
        cin>>notout;
        calcavg();
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    
}

void batsman::DisplayData()
{
    if (bcode>=1000 && bcode<=9999)
    {
        cout<<"\n****************************\n";
        cout<<"the Batsman code:"<<bcode<<endl;
        cout<<"Batsman name:"<<bname<<endl;    
        cout<<"innings:"<<innings<<endl;
            
        cout<<"total runs:"<<runs<<endl;    
        cout<<"notouts:"<<notout<<endl;
        cout<<"aveage:"<<batavg<<endl;
        cout<<"\n****************************\n";
    }
    else
    {
        cout<<"\n ";
    }
        
}
int main()
{
    batsman bt1;
    bt1.ReadData();
    bt1.DisplayData();

    return 0;
}