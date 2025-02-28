#include <iostream>

int main()
{
    // int s = 0, j = 42;
    // for (int i = 0; i < 6; ++j)
    // {
    //     std::cout << "\ntop s:" << s << " i:" << i << '\n';
    //     s += i;
    //     std::cout << "bottom s:" << s << " i:" << i << '\n';
    // }
    // std::cout << s << '\n';

    // double s = 0;
    // for (int i = 1; i < 10; ++i)
    // {
    //     double term = 1.0 / (i * i);
    //     s += term;
    //     std::cout << i << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';

    int p = 1;
    for (int i = 1; i <= 20; ++i)
    {
        int term = i;
        p *= term;
        std::cout << i << ' ' << p << '\n';
    }
    std::cout << p << '\n';
    return 0;
}
