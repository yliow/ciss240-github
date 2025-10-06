#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));

    // // 0.0 .. 1.0
    // for (int i = 0; i < 10; ++i)
    // {
    //     int r = rand();
    //     double x = double(r) / RAND_MAX;
    //     //double x = 1.0 * r / RAND_MAX;
    //     std::cout << i << ". " << x << '\n';
    // }

    // // 0.0 .. 5.0
    // for (int i = 0; i < 10; ++i)
    // {
    //     int r = rand();
    //     double x = double(r) / RAND_MAX * 5.0;
    //     std::cout << i << ". " << x << '\n';
    // }
    
    // // 0.0 .. 7.25
    // for (int i = 0; i < 100; ++i)
    // {
    //     int r = rand();
    //     double x = double(r) / RAND_MAX * 7.25;
    //     std::cout << i << ". " << x << '\n';
    // }

    // // 2.5 .. 7.25
    // std::cout << '\n';
    // for (int i = 0; i < 100; ++i)
    // {
    //     int r = rand();
    //     double x = double(r) / RAND_MAX * 4.75 + 2.5;
    //     std::cout << i << ". " << x << '\n';
    // }

    
    // // -1.5 .. 3.7
    // std::cout << '\n';
    // for (int i = 0; i < 100; ++i)
    // {
    //     int r = rand();
    //     double x = double(r) / RAND_MAX * 5.2 - 1.5;
    //     std::cout << i << ". " << x << '\n';
    // }
    
    // std::cout << RAND_MAX << '\n';

    // int a, b;
    // std::cin >> a >> b;
    // if (a > b)
    // {
    //     int t = a; // t is the "old a"
    //     a = b;
    //     b = t;
    // }
    // std::cout << a << ' ' << b << '\n';

    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    std::cout << "What is the product of " << x
              << " and " << y << "? ";
    int guess;
    std::cin >> guess;
    if (guess == x * y)
    {
        std::cout << "You smart dawg!\n";
    }
    else
    {
        std::cout << "Incorrect!\n";
    }
    return 0;
    
}
