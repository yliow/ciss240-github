#include <iostream>
#include <cmath>

/*
     x ---> square ---- > x*x
 */

int square(int x)
{
    int ret = x * x;
    return ret;
}

/*
  x -----> isprime -----> true iff x is prime
 */
bool isprime(int n)
{
    if (n <= 1)
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


int main()
{
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << i << ' ' <<  square(i) << '\n';
    // }
    // return 0;

    // for (int n = 0; n < 20; ++n)
    // {
    //     std::cout << n << ' ' << isprime(n) << '\n';
    // }
    // return 0;
    
    // const int n = 10000;
    // int prime[n];
    // int p = 2;
    // for (int i = 0 ; i < n; ++i)
    // {
    //     // put the next prime >= p value into p
    //     while (!isprime(p))
    //     {
    //         ++p;
    //     }
    //     prime[i] = p;
    //     ++p;
    // }

    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << prime[i] << ' ';
    // }
    // std::cout << '\n';

    const int n = 100;
    bool prime[n];
    for (int i = 0; i < n; ++i)
    {
        prime[i] = isprime(i);
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << i << ' ' << prime[i] << '\n';
    // }
    for (int i = 0; i < n; ++i)
    {
        if (prime[i])
        {
            std::cout << i << ' ';
        }
    }
    std::cout << '\n';


    
    return 0;
}
