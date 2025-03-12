#include <iostream>
#include <cmath>

bool isprime(int n)
{
    for (int d = 2; d <= sqrt(n); ++d)
    {
        if (n % d == 0)
        {
            return  false;   
        }
    }
    return true;
}

int main()
{
    // for (int i = 0; i < 20; i += 2)
    // {
    //     std::cout << "top of loop\n";
    //     std::cout << i << '\n';
    //     if (i > 10)
    //     {
    //         continue;
    //     }
    //     std::cout << "bottom of loop\n";
    // }
    // std::cout << "out of loop\n";

    // int n;
    // std::cin >> n;

    // if (n > 0)
    // {
    //     for (int i = 1; i <= n; ++i)
    //     {
    //         if (n % i == 0)
    //         {
    //             std::cout << i << '\n';
    //         }
    //     }
    // }
    // else
    // {
    //     std::cout << "Wrong input. Run again and enter a positive int.\n";
    // }

    // int n;
    // std::cin >> n;

    // bool isprime = true;
    // for (int d = 2; d < n; ++d)
    // {
    //     if (n % d == 0)
    //     {
    //         isprime = false;
    //         break;
    //     }
    // }

    // std::cout << (isprime ? "prime\n" : "not prime\n");
    
    // for (int n = 2; n <= 1000000; ++n)
    // {
    //     if (isprime(n))
    //     {
    //         std::cout << n << '\n';
    //     }
    // }

    for (int x = 0; x <= 20; ++x)
    {
        for (int y = 0; y <= 20; ++y)
        {
            for (int z = 0; z <= 20; ++z)
            {
                if (x * x + y * y == z)
                {
                    std::cout << x << ' ' << y << ' ' << z << '\n';
                }
            }
        }
    }

    return 0;
}
