#include <iostream>

// int add_one(int x)
// {
//     std::cout << "entering add_one with " << x << '\n';
//     int y = x + 1;
//     std::cout << "returning with " << y << '\n';
//     return y;
// }

int numdigits(int n)
{
    //compute num of digits and return it
    // use this only if n >= 0 !!!!!
    int numdigits_ = 0;
    if (n == 0)
    {
        numdigits_ = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            ++numdigits_;
        }
    }
    return numdigits_;
}

bool isprime(int n)
{
    bool isprime_ = true;
    for (int d = 2; d <= n - 1; ++d)
    {
        if (n % d == 0)
        {
            isprime_ = false;
            break;
        }
    }
    return isprime_;
}

int main()
{
    // int z = add_one(5);
    // std::cout << "z:" << z << '\n';
    // return 0;
    
    // int n;
    // std::cin >> n;
    // int m = numdigits(n);
    // std::cout << m << '\n';

    int n;
    std::cin >> n;
    bool m = isprime(n);
    if (m)
    {
        std::cout << n << " is prime\n";
    }
    else
    {
        std::cout << n << " is not prime\n";
    }

    return 0;
}
