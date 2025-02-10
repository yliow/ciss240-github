#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));

    std::cout << rand() << '\n';
    std::cout << RAND_MAX << '\n';
    std::cout << double(rand()) / RAND_MAX << '\n';

    // for (int i = 0; i < 10; i = i + 1)
    // {
    //     std::cout << i << " die roll: " << rand() % 6 + 1 << '\n';
    // }
    
    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     std::cout << i << "rand in 5..10: " << rand() % 6 + 5 << '\n';
    // }

    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     std::cout << i << "21..140: " << rand() % 120 + 21 << '\n';
    // }

    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     std::cout << i << "-5..8: " << rand() % 14 - 5 << '\n';
    // }

    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     std::cout << i << " -50..20: " << rand() % 31 - 50 << '\n';
    // }

    
    return 0;
}
