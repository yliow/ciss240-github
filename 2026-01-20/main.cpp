#include <iostream>

int main()
{
    // std::cout << 12 / 3 << '\n';
    // std::cout << 11 / 3 << '\n';
    // std::cout << 10 / 3 << '\n';
    // std::cout << 9 / 3 << '\n';
    // std::cout << 8 / 3 << '\n';

    // std::cout << 1 / 0 << '\n';

    // std::cout << 43 / 8 << '\n';
    // std::cout << 43 % 8 << '\n';

    // int minutes;
    // std::cout << minutes << '\n';
    // std::cin >> minutes;
    // std::cout << minutes << " minutes = ";
    // std::cout << minutes / 60 << " hours and ";
    // std::cout << minutes % 60 << " minutes\n";

    int hours = 1435;
    std::cout << hours / 24 << ' '
              << hours % 24 << '\n';

    std::cout << hours / 24 * 24 + hours % 24 << '\n';
    return 0;
}
