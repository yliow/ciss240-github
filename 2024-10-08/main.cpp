#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    // srand((unsigned int) time(NULL));
    // int x = rand() % 10 + 90;
    // int y = rand() % 10 + 90;
    // std::cout << "What is the product of " << x << " and " << y << "? ";

    // int guess;
    // std::cin >> guess;

    // int score = 0;
    // if (guess == x * y)
    // {
    //     std::cout << "You smart dawg!\n";
    //     score = 2;
    // }
    // else
    // {
    //     std::cout << "Wrong!\n";
    //     std::cout << "What is the product of " << x << " and " << y << "? ";
    //     std::cin >> guess;
    //     if (guess == x * y)
    //     {
    //         std::cout << "You smart dawg!\n";
    //         score = 1;
    //     }
    //     else
    //     {
    //         std::cout << "Wrong! The correct answer is " << x * y << '\n';
    //         score = 0;
    //     }
    // }
    // std::cout << "score:" << score << '\n';

    int x0 = 5, x1 = 3, x2 = 6, x3;
    int max;

    max = x0;
    std::cout << "max:" << max << '\n';
    
    if (x1 > max)
    {
        max = x1;
    }
    std::cout << "max:" << max << '\n';

    if (x2 > max)
    {
        max = x2;
    }
    std::cout << "max:" << max << '\n';

    if (x3 > max)
    {
        max = x3;
    }
    std::cout << "max:" << max << '\n';

    return 0;
}
