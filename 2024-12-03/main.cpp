#include <iostream>
#include <cmath>

bool isprime(int);
int numdigits(int);
int max(int, int);

int main()
{
    // for (int n = 0; n < 20; ++n)
    // {
    //     std::cout << n << ": " << isprime(n) << '\n';
    // }

    // for (int n = 123124; n < 123135; ++n)
    // {
    //     std::cout << n << ": " << numdigits(n) << '\n';
    // }

    std::cout << max(2, 5) << '\n';
    std::cout << max(5, 2) << '\n';
    
    return 0;
}

int numdigits(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int c = 0;
        while (n != 0)
        {
            n /= 10;
            ++c;
        }
        return c;
    }
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

int max(int i, int j)
{
    // if (i >= j)
    // {
    //     return i;
    // }
    // else
    // {
    //     return j;
    // }
}
