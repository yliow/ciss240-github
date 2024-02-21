#include <iostream>

int main()
{
    std::cout << "gimme an int: ";
    int x;
    std::cin >> x;

    if (x % 2 == 0)
    {
        std::cout << "even!!!\n";
    }
    else
    {
        std::cout << "odd!!!\n";
    }
    
    return 0;
}
