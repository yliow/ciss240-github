#include <iostream>

int main()
{
    // int num_accts;
    // std::cin >> num_accts;

    // double s = 0.0;

    // for (int i = 0; i < num_accts; ++i)
    // {
    //     double term;
    //     std::cin >> term;
    //     s = s + term;
    //     std::cout << "so far ... " << s << '\n';
    // }
    // std::cout << "final s: " << s << '\n';

    // int n;
    // std::cin >> n;

    // int p = 1;
    // for (int i = 1; i < n + 1; ++i) // i < n + 1 or i <= n
    // {
    //     p *= i;
    //     std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << p << '\n';

    // 2-power
    // int n;
    // std::cin >> n;

    // int p = 1;
    // for (int i = 0; i < n; ++i)
    // {
    //     p *= 2;
    //     std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << "final p:" << p << '\n';

    // n-choose-r function
    int n, r;
    std::cin >> n >> r;

    // compute n! and store in a
    int a = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        a *= i;
    }

    // compute r! and store in b
    int b = 1;
    for (int i = 1; i <= r; ++i)
    {
        b *= i;
    }

    // compute (n - r)! and store in c
    int c = 1;
    for (int i = 1; i <= n - r; ++i)
    {
        c *= i;
    }

    std::cout << a << ' ' << b << ' ' << c << '\n';
    int n_choose_r = a / (b * c);
    std::cout << "C(" << n << ", " << r << ") = " << n_choose_r << '\n';
    
    return 0;
}
