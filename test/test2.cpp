#include <iostream>
using namespace std;

// Create account type
enum AccountType
{
    Saving,
    Current
};

// class created of name BankAccount
class BankAccount
{
    private:                     
        char *HolderName;       // Account holder name
        AccountType AccType;    // Acount type
        int AccountNumber;       // Account Number
        int Balance;            // Available Balance

    public:
        // default constructor
        BankAccount() {}
        
        // parameterized constructor
        BankAccount(char name[], AccountType accountType, int accountNumber, int balance=0)
        {
            HolderName = name;
            Balance = balance;
            AccType = accountType;
            AccountNumber = accountNumber;
        }

        void DisplayAccountInfo();
        void Deposit(int amt);
        bool Withdraw(int amt);
};

bool BankAccount::Withdraw(int amt)
{   
    bool retVal = false;
    // Withdraw only if have sufficient amount other wise return error
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
    int amount;
    char depositorName[50];
    AccountType accType = AccountType::Saving;


    cout<<"Enter Account holder name ->";
    cin>>depositorName;

    cout<<"Enter the Account Number ->";
    cin>>accNum;

    cout<<"Enter the initial amount ->";
    cin>>amount;


    
    BankAccount *myAcc = new BankAccount(depositorName, accType, accNum, amount);

    cout<<"\n Enter amount to be Deposit ->";
    cin>>amount;

    myAcc->Deposit(amount);
    myAcc->DisplayAccountInfo();

    cout<<"\n Enter Amount to Withdraw ->";
    cin>>amount;

    if(myAcc->Withdraw(amount) == false)
    {
        cout<<"UnSufficient Amount\n";
    }

    myAcc->DisplayAccountInfo();


    return 0;
}