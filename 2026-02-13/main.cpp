#include <iostream>

int main()
{
    // std::cout << "before\n";
    // for (int i = 10; i >= 4; i -= 2)
    // {
    //     std::cout << i << '\n';
    // }
    // std::cout << "after\n";

    // int start, end;
    // std::cin >> start >> end;
    
    // std::cout << "n      n^2\n";
    // std::cout << "---    ---\n";
    // for (int i = start; i <= end; ++i)
    // {
    //     std::cout << i << "    " << i * i << '\n';
    // }

    // std::cout << "before\n";
    // for (double x = 3.1; x < 7.2; x += 0.1)
    // {
    //     std::cout << x << '\n';
    // }
    // std::cout << "before\n";
    // std::cout << x << '\n';

    // int s = 0;
    // for (int i = 1; i <= 10; ++i)
    // {
    //     char c;
    //     std::cout << "enter a char to continue ... ";
    //     std::cin >> c;
    //     s += i;
    //     std::cout << "partial ... " << i << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';
    
    // double s = 0.0;
    // for (int i = 1; i <= 100; ++i)
    // {
    //     s += 1.0 / (i * i);
    //     std::cout << i << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';

    // int p = 1;
    // for (int i = 1; i <= 5; ++i)
    // {
    //     p *= i;
    //     std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << p << '\n';

    // int p = 1;
    // int n;
    // std::cin >> n;
    // for (int i = 1; i < n; ++i)
    // {
    //     if (i % 2 == 1)
    //     {
    //         p *= i;
    //     }
    //     std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << p << '\n';

    double x;
    int n; // can be negative
    std::cin >> x >> n;
    double p = 1;
    if (n < 0)
    {
        n = -n;
        x = 1.0 / x;
    }
    for (int i = 1; i <= n; ++i)
    {
        p *= x;
        std::cout << i << ' ' << p << '\n';
    }

    std::cout << p << '\n';

    return 0;
}
