#include <iostream>
#include <string>

#include "account.h"

using namespace std;

int main(){

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