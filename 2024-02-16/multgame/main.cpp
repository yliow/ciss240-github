#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    std::cout << "What is the product of " << x << " and " << y << "? ";
    int guess;
    std::cin >> guess;

    if (guess == x * y)
    {
        std::cout << "You smart dawg!\n";
    }
    else
    {
        std::cout << "Wrong!!!\n";
    }

    return 0;
}
