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

int two()
{
    return 2;
}

int square(int x)
{
    return x * x;
}

int factorial(int n)
{
    int p = 1;
    for (int i = 1; i <= n; ++i)
    {
        p *= i;
    }
    return p;
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
        int p2 = n - p1;
        if (is_prime(p1) && is_prime(p2))
        {
            std::cout << p1 << ' ' << p2 << '\n';
        }
    }

    std::cout << two() << '\n';
    for (int x = 0; x < 10; ++x)
    {
        std::cout << x << ' ' << square(x) << '\n';
    }
    for (int x = 0; x < 20; ++x)
    {
        std::cout << x << ' ' << factorial(x) << '\n';
    }
    
    return 0;
}
