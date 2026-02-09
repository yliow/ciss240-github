#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
    // int a = 0;
    // std::cin >> a;

    // if (a == 42)
    // {
    //     std::cout << "C++: Mine too!\n";
    // }
    // else
    // {
    //     std::cout << "C++: boo!\n";
    // }

    // int i;
    // std::cin i >> i;
    // if (i % 2 == 0)
    // {
    //     std::cout << "even!!!\n";
    // }
    // else
    // {
    //     std::cout << "odd!!!\n";
    // }

    // const double HOURLY_RATE_0 = 123.45;
    // const double HOURLY_RATE_1 = 7.99;
    // int employee_code;
    // std::cin >> employee_code;

    // double hourly_rate;
    // if (employee_code == 0)
    // {
    //     hourly_rate = HOURLY_RATE_0;
    // }
    // else
    // {
    //     hourly_rate = HOURLY_RATE_1;
    // }
    // int number_of_hours;
    // std::cin >> number_of_hours;

    // std::cout << '$'
    //           << std::fixed << std::setprecision(2)
    //           << number_of_hours * hourly_rate << '\n';

    // seed with time
    // get two random ints in 90..99
    // srand((unsigned int) time(NULL));
    // int x = rand() % 10 + 90;
    // int y = rand() % 10 + 90;
    // std::cout << "What is the product of " << x << " and "
    //           << y << "? ";
    // int guess;
    // std::cin >> guess;

    // int answer = x * y;
    // if (guess == answer)
    // {
    //     std::cout << "You smart dawg!\n";
    // }
    // else
    // {
    //     std::cout << "Nope ... it's " << answer << "\n";
    // }

    // int x0 = 1, x1 = 3, x2 = 0, x3 = 5, x4 = 0;
    // int max;

    // max = x0;
    // std::cout << max << '\n';
    // if (x1 > max)
    // {
    //     max = x1;
    // }
    // std::cout << max << '\n';
    // if (x2 > max)
    // {
    //     max = x2;
    // }
    // std::cout << max << '\n';
    // if (x3 > max)
    // {
    //     max = x3;
    // }
    // std::cout << max << '\n';
    // if (x4 > max)
    // {
    //     max = x4;
    // }
    // std::cout << max << '\n';

    double num_grade;
    std::cin >> num_grade;
    if (num_grade < 60.0)
    {
        std::cout << "F\n";
    }
    else if (num_grade < 70.0)
    {
        std::cout << "D\n";
    }
    else  if (num_grade < 80.0)
    {
        std::cout << "C\n";
    }
    else if (num_grade < 90.0)
    {
        std::cout << "B\n";
    }
    else
   {
        std::cout << "A\n";
    }

    return 0;
}
