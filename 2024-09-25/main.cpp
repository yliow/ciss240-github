#include <iostream>

int main()
{
    // int x = 1, y = 2, z = 3;
    // std::cout << (x <= y <= z) << '\n';

    double sav_acct;
    double monthly_rent;
    double daily_exp;
    int days_in_mth;
    std::cin >> sav_acct >> monthly_rent >> daily_exp >> days_in_mth;

    double tot_exp = month_rent + daily_exp * days_in_mth;
    bool call_home_for_cash = (sav_acct < tot_exp);
    std::cout << call_home_for_cash;
    
    return 0;
}
