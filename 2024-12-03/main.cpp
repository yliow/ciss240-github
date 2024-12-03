#include <iostream>
#include <cmath>

bool isprime(int);
int numdigits(int);

int main()
{
    // for (int n = 0; n < 20; ++n)
    // {
    //     std::cout << n << ": " << isprime(n) << '\n';
    // }

    for (int n = 0; n < 100; ++n)
    {
        std::cout << n << ": " << numdigits(n) << '\n';
    }
    return 0;
}

int numdigits(int n)
{
    int c = 0;
    while (n != 0)
    {
        n /= 10;
        ++c;
    }
    return c;
}

bool isprime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
        return true;
    }
}
