#include <iostream>
#include <cmath>

bool is_prime(int n)
{
    for (int d = 2; d <= sqrt(n); d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // int count = 0;
    // for (int n = 2; n < 1000000000; ++n)
    // {
    //     if (is_prime(n))
    //     {
    //         ++count;
    //         std::cout << n << ' ' << count << ' ' << double(count) / n << '\n';
    //     }
    // }

    int n;
    std::cin >> n;
    for (int p1 = 2; p1 <= n / 2; ++p1)
    {
        for (int p2 = 2; p2 <= n / 2; ++p2)
        {
            if (n == p1 + p2 && isprime(p1) && isprime(p2))
            {
                std::cout << p1 << ' ' << p2 << '\n';
            }
        }
    }
    
    return 0;
}
