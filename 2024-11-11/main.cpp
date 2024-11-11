#include <iostream>

int main()
{
    // compute number of digits in an int
    int n;
    std::cin >> n;

    int numdigits = 0;
    while (n != 0)
    {
        std::cout << "\ntop ... n, numdigits:" << n << ' ' << numdigits << '\n';
        n = n / 10;
        ++numdigits;
        std::cout << "bottom ... n, numdigits:" << n << ' ' << numdigits << '\n';
    }

    std::cout << numdigits << '\n';

    return 0;
}
