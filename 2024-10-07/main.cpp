#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // int x0, x1, x2, x3;
    // std::cin >> x0 >> x1 >> x2 >> x3;

    // int t;
    // std::cout << "pass 1\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x1 > x2)
    // {
    //     t = x1;
    //     x1 = x2;
    //     x2 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x2 > x3)
    // {
    //     t = x2;
    //     x2 = x3;
    //     x3 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    // std::cout << "pass 2\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x1 > x2)
    // {
    //     t = x1;
    //     x1 = x2;
    //     x2 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    
    // std::cout << "pass 3\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    
    // int a = 0;
    // std::cin >> a;

    // if (a == 42)
    // {
    //     std::cout << "a is 42\n";
    // }
    // else
    // {
    //     std::cout << "a is not 42\n";
    // }

    // int n;
    // std::cin >> n;
    // if (n % 2 == 0)
    // {
    //     std::cout << n << " is even\n";
    // }
    // else
    // {
    //     std::cout << n << " is odd\n";
    // }

    std::cout << "What is the product of 97 and 94? ";
    int guess;
    std::cin >> guess;

    if (guess == 9118)
    {
        std::cout << "Correct!\n";
    }
    else
    {
        std::cout << "Wrong!\n";
    }
    
    return 0;
}