#include <iostream>

int main()
{
    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;

    int t;
    std::cout << "pass 1\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x1 > x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x2 > x3)
    {
        t = x2;
        x2 = x3;
        x3 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    std::cout << "pass 2\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x1 > x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    
    std::cout << "pass 3\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    return 0;
}
