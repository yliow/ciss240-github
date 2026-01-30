#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // std::cout << "Pay calculator (version 0.1)\n";

    // std::cout << "Enter hours: ";
    // double hours;
    // std::cin >> hours;
    // std::cout << "Enter pay-per-hour (in dollars): ";
    // double pay_per_hour;
    // std::cin >> pay_per_hour;

    // double pay = hours * pay_per_hour;
    // std::cout << "Pay: $" << pay << '\n';

    // char x = '$';
    // char y = '\n';
    // char s[100] = "Frodo lives!";
    // char t[100] = "C++ rules!";

    // std::cout << x << '\n'
    //           << y << '\n'
    //           << s << '\n'
    //           << t << '\n';

    // char x;
    // std::cin >> x;

    // std::cout << "i'm c++ ... what's your name? ";
    // char name[100];
    // std::cin >> name;
    // std::cout << "hi " << name << '\n';
    // std::cin >> name;
    // std::cout << name << '\n';

    // std::cout << std::fixed << std::setprecision(20)
    //           << 0.1 + 0.1 + 0.1 << '\n';

    // double x;
    // int i;

    // i = 5;
    // x = double(i); // get 5.0
    // x = (double) i; // get 5.0
    // std::cout << x << '\n';

    // x = 12.89;
    // i = int(x);
    // std::cout << i << '\n';

    // i = 12.89;
    // std::cout << i << '\n';

    // int i = 1;
    // int j = 2;
    // std::cout << double(i / j) << '\n';

    // double x;
    // std::cin >> x;
    // int i = x + 0.5; // rounding trick
    // std::cout << x << ", " << i << '\n';

    // std::cout << pow(2.0, -1.0) << '\n'
    //           << pow(2.0, 1.0) << '\n'
    //           << pow(2.0, 2.0) << '\n'
    //           << pow(2.0, 3.0) << '\n';

    // double x;
    // std::cin >> x;
    // std::cout << pow(x, 0.5) << '\n';

    // Test cases
    // n = 135642, i = 0: digit = 2
    // n = 135642, i = 1: digit = 4
    // n = 135642, i = 2: digit = 6
    // n = 135642, i = 3: digit = 5
    // n = 135642, i = 4: digit = 3
    int n;
    std::cin >> n; // example 135642
    int i;
    std::cin >> i; // example 3
    int digit = ?; // example 5
    std::cout << digit << '\n';
    return 0;
}
