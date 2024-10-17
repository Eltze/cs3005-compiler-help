#include <string>
#include <iostream>
#include "image_menu.h"

int main()
{

    Account my_account(12345);
    my_account.set_balance(12.95);
    
    my_account.print_balance();

    return 0;
}