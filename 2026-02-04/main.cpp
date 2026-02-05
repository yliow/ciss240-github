#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));

    // std::cout << rand() << '\n';
    // std::cout << RAND_MAX << '\n';

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << double(rand()) / RAND_MAX << '\n';
    // }

    // double d = 0;
    // for (int i = 0; i < 1000; ++i)
    // {
    //     d = d + double(rand()) / RAND_MAX;
    // }
    // std::cout << d / 1000 << '\n';

    // int n;

    // for (int i = 0; i < 20; ++i)
    // {
    //     n = rand();
    //     //std::cout << n << '\n';
    //     n = n % 100 + 1;
    //     std::cout << n << '\n';
    // }

    // int die;
    // for (int i = 0; i < 10; ++i)
    // {
    //     die = rand() % 6 + 1;
    //     std::cout << die << ' ';
    // }
    // std::cout << '\n';

    // int n;
    // for (int i = 0; i < 20; ++i)
    // {
    //     n = rand() % 16 + 5;
    //     std::cout << n << ' ';
    // }
    // std::cout << '\n';

    // 0.0 - 2.0
    // double d;
    // for (int i = 0; i < 20; ++i)
    // {
    //     d = double(rand()) / RAND_MAX * 2.0;
    //     std::cout << d << '\n';
    // }

    // double d;
    // for (int i = 0; i < 20; ++i)
    // {
    //     d = double(rand()) / RAND_MAX * 2.0 - 1.0;
    //     std::cout << d << '\n';
    // }

    // double x = 1.1, y = 2.2;
    // double t;
    // t = x;
    // x = y;
    // y = t;

    // int i, j;
    // std::cin >> i >> j;
    // int t;
    // if (i > j)
    // {
    //     t = i;
    //     i = j;
    //     j = t;
    // }
    // std::cout << i << ' ' << j << '\n';

    // int x, y, z;
    // std::cin >> x >> y >> z;
    // int t;
    
    // if (x > y)
    // {
    //     t = x; x = y; y = t;
    // }
    // std::cout << x << ' ' << y << ' ' << z << '\n';
    
    // if (y > z)
    // {
    //     t = y; y = z; z = t;
    // }
    // std::cout << x << ' ' << y << ' ' << z << '\n';

    // if (x > y)
    // {
    //     t = x; x = y; y = t;
    // }
    // std::cout << x << ' ' << y << ' ' << z << '\n';

    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;
    int t;
    
    std::cout << "Pass 1\n";
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';
    if (x1 > x2)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';
    if (x2 > x3)
    {
        t = x2; x2 = x3; x3 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';

    std::cout << "Pass 2\n";
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';
    if (x1 > x2)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';
    std::cout << "Pass 3\n";
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3
              << '\n';

    return 0;
}
