#include <iostream>
#include <cstdlib>

int main()
{
    // int s;
    // std::cin >> s;
    // srand(s);

    srand((unsigned int) time(NULL));
    
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << rand() % 24 - 12 << '\n';
    // }

    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << double(rand()) / RAND_MAX * 7.8 - 5.1 << '\n';
    // }

    // double x = 1.2;
    // double y = 7.8;
    // double t;
    // std::cout << x << ' ' << y << '\n';
    // t = x;
    // x = y;
    // y = t;
    // std::cout << x << ' ' << y << '\n';

    // bubblesort 2 values
    // int x0, x1;
    // std::cin >> x0 >> x1;
    // int t;
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << '\n';

    // bubblesort on 3 values
    int x0, x1, x2;
    int t;
    std::cin >> x0 >> x1 >> x2;

    std::cout << "Pass 1\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    if (x1 > x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';

    std::cout << "Pass 2\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';

    return 0;
}
