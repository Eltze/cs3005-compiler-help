#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    double balance;
    int account_num;

public:
    Account(int Account_num_in);
    void set_balance(double amt);
    double get_balance();
    void print_balance();

};