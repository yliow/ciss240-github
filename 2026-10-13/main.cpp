#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    int answer = x * y;
    int guess;
    std::cout << "What is the product of "
              << x << " and " << y
              << " (answer: " << answer 
              << ") ? ";
    std::cin >> guess;

    int score;
    if (guess == answer)
    {
        score = 2;
    }
    else
    {
        if (guess > answer)
        {
            std::cout << "Too high! Try again.\n";
            std::cout << "What is the product of "
                      << x << " and " << y
                      << " (answer: " << answer 
                      << ") ? ";
            std::cin >> guess;
            if (guess == answer)
            {
                score = 1;
            }
            else
            {
                score = 0;
            }
        }
        else // guess < answer
        {
            std::cout << "Too low! Try again.\n";
            std::cout << "What is the product of "
                      << x << " and " << y
                      << " (answer: " << answer 
                      << ") ? ";
            std::cin >> guess;
            if (guess == answer)
            {
                score = 1;
            }
            else
            {
                score = 0;
            }
        }
    }

    std::cout << (score == 0 ? "Wrong!" : "Correct!")
              << "\n";
    std::cout << "Score: " << score << '\n';
    return 0;
}
