#include <iostream>
#include <cmath>

int gimme_zero()
{
    return 0;
}

bool is_even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

bool isprime(int n)
{
    for (int d = 2; d < n; ++d) // dont forget to optimize using sqrt(n)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int numdigits(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int numdigits_ = 0;
        while (n != 0)
        {
            n /= 10;
            ++numdigits_;
        }
        return numdigits_;
    }
}

int digit(int n, int i)
{
    return n / int(pow(10, i)) % 10;
}

int main()
{
    int x = gimme_zero();
    std::cout << x << '\n';

    for (int n = 100; n < 111; ++n)
    {
        std::cout << n << ' ' << is_even(n) << '\n';
    }
    std::cout << sum(10) << '\n';
    std::cout << 97 << ' ' << isprime(97) << '\n';
    std::cout << 98 << ' ' << isprime(98) << '\n';
    std::cout << numdigits(0) << '\n';
    std::cout << numdigits(5) << '\n';
    std::cout << numdigits(153) << '\n';

    std::cout << digit(1506051, 3) << '\n';
    std::cout << digit(123234, 1) << '\n';
    
    
    return 0;
}
