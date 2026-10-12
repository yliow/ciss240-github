#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    srand((unsigned int) time(NULL));
    int x, y;
    x = rand() % 10 + 90;
    y = rand() % 10 + 90;
    std::cout << "What is the product of " << x << " and " << y
              << "? ";
    int guess;
    int answer = x * y;
    std::cin >> guess;
    if (guess == answer)
    {
        std::cout << "You smart dawg!\n";       
    }
    else
    {
        std::cout << "Wrong! The answer is " << answer << ".\n";
    }

    // int x;
    // std::cin >> x;
    // if (x % 2 == 0)
    // {
    //     std::cout << "even\n";
    // }
    // else
    // {
    //     std::cout << "odd\n";
    // }
    
    return 0;
}
