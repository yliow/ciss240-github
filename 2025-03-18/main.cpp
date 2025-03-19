#include <iostream>
#include <cmath>

int main()
{
    // int n;
    // std::cin >> n;

    // int numdigits = 0;
    // if (n == 0)
    // {
    //     numdigits = 1;
    // }
    // else
    // {
    //     while (n != 0)
    //     {
    //         n /= 10;
    //         ++numdigits;
    //         std::cout << n << ' ' << numdigits << '\n';
    //     }
    // }
    // std::cout << numdigits << '\n';

    int n;
    std::cin >> n;
    int i;
    std::cin >> i;

    int digit = n / int(pow(10, i)) % 10;

    std::cout << digit << '\n';

    return 0;
}
