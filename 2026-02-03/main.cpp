#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // int x = 6;
    // std::cout << (!((x < 0) || (x > 5)))
    //           << ' '
    //           << ((x >= 0) && (x <= 5))
    //           << '\n';

    // int x = 0;
    // std::cin >> x;

    // if (x > 0)
    // {
    //     std::cout << "spam\n";
    // }
    // std::cout << "eggs\n";

    // int x = 0;
    // std::cin >> x;
    // if (x == 42)
    // {
    //     std::cout << "spam\n";
    // }
    // std::cout << "eggs\n";

    // int x;
    // std::cin >> x;

    // if (x % 2 == 0)
    // {
    //     std::cout << "That's even. Am I smart?\n";
    // }

    // int x, y;
    // std::cin >> x >> y;
    // if (x > y)
    // {
    //     std::cout << "First is bigger\n";
    // }

    // int x = 0;
    // std::cin >> x;
    // if (x > 0);
    // std::cout << "spam!\n";
    // std::cout << "eggs\n";

    // multiplication game
    /*
    int guess;
    std::cout << "What is the product of 97 and 94? ";
    std::cin >> guess; // student's guess
    if (guess == 9118)
    {
        std::cout << "You smart dawg!\n";
    }
    */

    srand((unsigned int) time(NULL));
    
    for (int i = 0; i < 10; ++i)
    {
        std::cout << rand() << '\n';
    }
    std::cout << RAND_MAX << '\n';

    return 0;
}
