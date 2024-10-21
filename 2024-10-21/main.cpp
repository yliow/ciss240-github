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
    int n;
    std::cin >> n;

    int p = 1;
    for (int i = 0; i < n; ++i)
    {
        p *= 2;
        std::cout << i << ' ' << p << '\n';
    }
    std::cout << "final p:" << p << '\n';
   
    return 0;
}
