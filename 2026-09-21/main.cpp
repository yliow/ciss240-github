#include <iostream>

int main()
{
    // int x;
    // std::cin >> x;
    // int d2 = (x / 100) % 10;
    // std::cout << d2 << '\n';
    // std::cout << &x << '\n';

    std::cout << "Multiplicator !!!\n";
    int x, y;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    std::cout << x << " * " << y << " = "
              << x * y << '\n';
    return 0;
}
