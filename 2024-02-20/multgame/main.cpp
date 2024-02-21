#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    int answer = x * y;
    std::cout << "What is the product of " << x << " and " << y << "? ";
    //std::cout << "(answer: " << x * y << ")\n";
    int guess;
    std::cin >> guess;

    int score;
    if (guess == answer)
    {
        std::cout << "You smart dawg!\n";
        score = 2;
    }
    else
    {
        std::cout << "Wrong!!!\n";
        std::cout << "What is the product of " << x << " and " << y << "? ";
        std::cin >> guess;
        if (guess == answer)
        {
            std::cout << "You smart dawg!\n";
            score = 1;
        }
        else
        {
            std::cout << "Wrong!!!\n";
            std::cout << "The correct answer is " << answer << '\n';
            score = 0;
        }
    }

    std::cout << "score: " << score << '\n';
    return 0;
}
