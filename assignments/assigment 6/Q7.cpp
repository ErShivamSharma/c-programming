#include <iostream>
using namespace std;

class BankAccount
{
    private:
        int AccountNumber;
        int Balance;

    public:
        BankAccount()
        {
            AccountNumber = 0;
            Balance = 0;
        }
        

        BankAccount(int accNum, int balance)
        {
            AccountNumber = accNum;
            Balance = balance;
        }

        void DisplayAccountInfo();
        void Deposit(int amt);
        bool Withdraw(int amt);
};

bool BankAccount::Withdraw(int amt)
{   
    bool retVal = false;
    if(Balance >= amt)
    {
        Balance -=amt;
        retVal = true;
    }

    return retVal;
}

void BankAccount::Deposit(int amt)
{
    Balance += amt;
}

void BankAccount::DisplayAccountInfo()
{
    cout<<"\n************************\n";
    cout<<"Account Number -> "<<AccountNumber;
    cout<<"\nBalance        -> "<<Balance;
    cout<<"\n************************\n";
}

int main()
{
    int accNum;
    cout<<"Enter the Account Number ->";
    cin>>accNum;
    int amount;
    
    BankAccount *myAcc = new BankAccount(accNum, 0);
    cout<<"\n Enter Amount ->";
    cin>>amount;

    myAcc->Deposit(amount);
    myAcc->DisplayAccountInfo();

    cout<<"\n Enter Amount to Withdraw ->";
    cin>>amount;

    if(myAcc->Withdraw(amount) == false)
    {
        cout<<"unsufficient balance\n";
    }
    myAcc->DisplayAccountInfo();

    return 1;
}