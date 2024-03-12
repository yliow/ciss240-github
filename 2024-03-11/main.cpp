#include <iostream>
#include <cmath>

int main()
{
    // int n;
    // std::cin >> n;
    // for (int i = 1; i <= n; ++i)
    // {
    //     // print i stars
    //     for (int j = 0; j < i; ++j)
    //     {
    //         std::cout << '*';
    //     }
    //     // print newline
    //     std::cout << '\n';
    // }

    // int n;
    // std::cin >> n;
    
    // for (int i = n - 1; i >= 0; --i)
    // {
    //     // print i spaces
    //     for (int j = 1; j <= i; ++j)
    //     {
    //         std::cout << ' ';
    //     }

    //     // print n stars
    //     for (int j = 1; j <= n; ++j)
    //     {
    //         std::cout << '*';
    //     }

    //     std::cout << '\n';
    // }

    // print divisors
    // int n;
    // std::cin >> n;

    // for (int d = 1; d <= n; ++d)
    // {
    //     if (n % d == 0)
    //     {
    //         std::cout << d << '\n';
    //     }
    // }

    // primality testing algorithm

    int count = 0;
    for (int n = 2; n <= 10000000; ++n)
    {
        //int n;
        //std::cin >> n;
    
        bool is_prime = true;
        for (int d = 2; d < sqrt(n) + 1; ++d)
        {
            if (n % d == 0)
            {
                is_prime = false;
                break;
            }
        }

        //std::cout << n << (is_prime ? " prime" : " not prime")
        //          << '\n';

        if (is_prime)
        {
            ++count;
            std::cout << n << " prime ... " << count << "\n";
        }
    }
    return 0;
}
