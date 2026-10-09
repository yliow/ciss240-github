#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    //srand(0);
    
    // std::cout << "What is the product of 97 and 94? ";
    // int guess;
    // std::cin >> guess;
    // if (guess == 9118)
    // {
    //     std::cout << "You smart sawg!\n";
    // }

    // std::cout << rand() << '\n';
    // std::cout << rand() << '\n';
    // std::cout << rand() << '\n';
    // std::cout << RAND_MAX << '\n';

    // for (int i = 0; i < 30; i = i + 1)
    // {
    //     // int die = rand() % 6 + 1;
    //     //std::cout << i << ". " << die << '\n';
        
    //     // int x = rand() % 10 + 1;
    //     // std::cout << x << '\n';

    //     // int x = rand() % 11 + 5;
    //     // std::cout << x << '\n';
        
    //     int x = rand() % 26 - 10;
    //     std::cout << x << '\n';
    // }

    std::cout << double(rand()) / RAND_MAX << '\n';
    return 0;
}
