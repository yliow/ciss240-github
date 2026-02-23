#include <iostream>
#include <cmath>

int main()
{
    // int i = 0;
    // for (;i < 5;)
    // {
    //     std::cout << i << '\n';

    //     ++i;
    // }
    // //std::cout << i << '\n';

    // for (int i = 0; i < 5; ++i)
    // {
    //     std::cout << "i:" << i << '\n';
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         std::cout << "    j:" << j << '\n';
    //     }
    //}
    // int n;
    // std::cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << ' ';
    // }
    // std::cout << '*';
    // std::cout << '\n';

    // for (int i = 0; i < 20; i += 2)
    // {
    //     std::cout << i << '\n';
    //     if (i > 10) continue;
    //     std::cout << "bottom\n";
    //}

    // int n;
    // std::cin >> n;
    // for (int d = 1; d <= n; ++d)
    // {
    //     if (n % d == 0)
    //     {
    //         std::cout << d << '\n';
    //     }
    // }

    for (int n = 500000000; n <= 1000000000; ++n)
    {
        bool isprime = true;
        if (n < 2)
        {
            isprime = false;
        }
        else
        {
            int sqrtn = sqrt(n);
            for (int d = 2; d <= sqrtn; ++d)
            {
                if (n % d == 0)
                {
                    isprime = false;
                    break;
                }
            }
        }
        if (isprime)
        {
            std::cout << n << '\n';
        }
    }    
    
    return 0;
}
