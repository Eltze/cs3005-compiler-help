#include "Account.h"

Account::Account(int account_num_in)
{
    account_num = account_num_in;
}

void Account::set_balance(double amt)
{
    balance = amt;
};

double Account::get_balance()
{
    return balance;
};

void Account::print_balance()
{
    cout << "Account: " << account_num << endl;
    cout << "Balance: " << balance;
};

