#include <iostream>

int main()
{
    // double s = 0.0;
    // for (int i = 1; i <= 100000; ++i)
    // {
    //     s = s + 1.0 / i;
    //     std::cout << i << ' ' << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';

    // int prod = 1;
    // for (int i = 1; i <= 20; ++i)
    // {
    //     int term = i;
    //     prod = prod * term;
    //     std::cout << i << ' ' << term << ' ' << prod << '\n';
    // }
    // std::cout << prod << '\n';

    /*
      p = 1
      i = 1
      i = 1:
          term = 1
          p = p * term = 1 * 1
      i = 2:
          term = 2
          p = p * term = 1 * 1 * 2
      i = 3:
          term = 3
          p = p * term = 1 * 1 * 2 * 3
     */

    /*
      n = 8
      1 * 3 * 5 * 7
     */
    // int n;
    // std::cin >> n;
    // int p = 1;
    // for (int i = 1; i < n; i += 2)
    // {
    //     p *= i;
    //     std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << p << '\n';

    // 2 to the power of n
    // example: n = 3
    //          compute 2 to the 3
    //          2 * 2 * 2
    // example: n = 5
    //          compute 2 * 2 * 2 * 2 * 2
    // int n;
    // std::cin >> n;
    // int p = 1;
    // for (int i = 1; i <= n; ++i)
    // {
    //     p *= 2;
    //     //std::cout << i << ' ' << p << '\n';
    // }
    // std::cout << p << '\n';

    double x;
    int n;
    std::cin >> x >> n;
    double p = 1.0;
    for (int i = 0; i < n; ++i)
    {
        p *= x;
        // std::cout << i << ' ' << p << '\n';
    }
    std::cout << p << '\n';
    
    return 0;
}
