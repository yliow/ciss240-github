#include <iostream>
//#include <iomanip>

int main()
{
    // int x = 42;
    // std::cout << "1: [" << std::setw(5) << std::setfill('*') << x << "]\n"
    //           << "2: [" << std::setw(10) << std::setfill('-') << "abc" << "]\n";

    std::cout << 1.2345 << '\n'
              << 1e-1 << '\n'
              << 1e2 << '\n'
              << 1.2E+3 << '\n';
    return 0;
}
