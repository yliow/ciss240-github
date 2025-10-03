#include <iostream>

int main()
{
    int a = rand();
    std::cout << a << '\n';
    a = rand();
    std::cout << a << '\n';
    
    
    std::cout << "What is the product of 97 and 94? ";
    int x;
    std::cin >> x;

    if (x == 9118)
    {
        std::cout << "You smart dawg!\n";
    }
    else
    {
        std::cout << "Incorrect!\n";
    }
    
    return 0;
}
