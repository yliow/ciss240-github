#include <iostream>

int main()
{
    std::cout << "Multiplicator !!!\n";
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    std::cout << "Enter another integer: ";
    int y;
    std::cin >> y;

    int prod = x * y;

    std::cout << x << " * " << y << " = " << prod << '\n';
    
    return 0;
}
