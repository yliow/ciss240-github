#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // std::cout << "What is the product of 97 and 94? ";
    // int guess;
    // std::cin >> guess;

    // if (guess == 9118)
    // {
    //     std::cout << "You smart dawg!\n";
    // }
    // else
    // {
    //     std::cout << "Wrong!!!\n";
    // }
    // srand((unsigned int) time(NULL));
    // for (int i = 0; i < 100; i = i + 1)
    // {
    //     std::cout << rand() << '\n';
    // }
    // std::cout << RAND_MAX << '\n';
    
    srand((unsigned int) time(NULL));

    for (int i = 0; i < 20; i = i + 1)
    {
        std::cout << rand() % 6 + 1 << '\n';
    }
    
    return 0;
}
