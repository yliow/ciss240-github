#include <iostream>
#include <cstdlib>

int main()
{
    // int x = 0;
    // std::cin >> x;

    // if (x % 2 == 0)
    // {
    //     std::cout << "That's even. Am I smart?\n";
    // }
    
    // std::cout << "eggs\n";


    // int x, y;
    // std::cin >> x >> y;
    // if (x > y)
    // {
    //     std::cout << "First is bigger\n";
    // }

    // int x;
    // std::cin >> x;

    // if (x > 0);
    //     std::cout << "spam!\n";
    // std::cout << "eggs\n";

    // int guess;
    // std::cout << "What is the product of 97 and 94? ";
    // std::cin >> guess;

    // if (guess == 9118)
    // {
    //     std::cout << "You smart dawg!\n";
    // }

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << rand() << '\n';
    // }
    // std::cout << RAND_MAX << '\n';

    // random int in 0..6
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand() % 7 << '\n';
    // }

    // random int in 1..6
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand() % 6 + 1 << '\n';
    // }

    // random int in 12..15
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand() % 4 + 12 << '\n';
    // }

    // random # in -10..-5
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand() % 6 - 10 << '\n';
    // }

    // random # in -101..3
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << rand() % 105 - 101 << '\n';
    // }

    // random double in 0.0 .. 1.0
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << double(rand()) / RAND_MAX << '\n';
    // }

    // random double in 0.0 .. 3.0
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << double(rand()) / RAND_MAX * 3.0 << '\n';
    // }

    // random double in 1.5 .. 3.0
    for (int i = 0; i < 20; ++i)
    {
        std::cout << double(rand()) / RAND_MAX * 1.5 + 1.5 << '\n';
    }


    
    return 0;
}
