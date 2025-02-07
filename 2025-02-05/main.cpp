#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    // int x;
    // std::cin >> x;

    // // if (x % 2 == 0)
    // // {
    // //     std::cout << "That's even. Am I smart?\n";
    // // }

    // if (x > 0)
    //     ;

    // std::cout << "eggs\n";

    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    std::cout << "What is the product of "
              << x << " and " << y << "? ";
    int guess;
    std::cin >> guess;

    if (guess == 97 * 94)
    {
        std::cout << "You smart dawg!\n";
    }

    // for (int i = 0; i < 10; i = i + 1)
    // {
    //     std::cout << i << ' ' << rand() << '\n';
    // }
    
    return 0;
}
