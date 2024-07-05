#include <iostream>
using namespace std;
class unicode
{
    public:
    int CharToAscii(char);
    char AsciiToChar(int);
};

int unicode::CharToAscii(char ch)
{
    int temp = ch;
    return temp;
}

char unicode::AsciiToChar(int asc)
{
    char ch = asc;
    return ch;
}

int main()
{
    char a;
    cout<<"Input the character:";
    cin>>a;
    unicode alpha;
    int code = alpha.CharToAscii(a);
    cout<<"The ASCII value of "<<a<<" is :"<<code<<endl;
    char asc = alpha.AsciiToChar(code);
    cout<<"The charachter for the ASCII value "<<code<<" is:"<<asc<<endl;

    return 0;
}