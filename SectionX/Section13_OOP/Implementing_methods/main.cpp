#include <iostream>
#include <string>

using namespace std;

class Account 
{
    private:
        //attributes
        string name;
        double balance;

    public:
        //methods
        //declared inline
        void set_balance(double bal){ balance = bal;}
        double get_balance(){return balance;}

        //method will de declared outside the class declaration
        //method(function) prototype
        void set_name(string n);
        string get_name();

        bool deposit(double amount);
        bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }else 
    {
        return false;
    }
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200))
    {
        cout << "Deposited successfully" << endl;
    }else
    {
        cout << "Deposit failed" << endl;
    }

    if(frank_account.withdraw(500.0))
    {
        cout << "Withdraw successfully" << endl;
    }else
    {
        cout << "Withdrwa failed" << endl;
    }

    if(frank_account.withdraw(1500.0))
    {
        cout << "Withdraw successfully" << endl;
    }else
    {
        cout << "Withdraw failed" << endl;
    }

    return 0;
}