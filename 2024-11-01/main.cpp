#include <iostream>

int main()
{
    /*
    int n;
    std::cin >> n;

    int nstars = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        //std::cout << i << ' ' << nstars << '\n';
        // i = num spaces
        // nstar = num stars

        // print i spaces
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        // print nstars stars
        for (int j = 0; j < nstars; ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
        
        // for next iteration ...
        nstars += 2;
    }
    */

    /*
    for (int i = 0; i < 10; i += 2)
    {
        std::cout << "top of loop ... i = " << i << '\n';
        if (i == 4)
        {
            continue; 
        }
        std::cout << "bottom of loop\n";
    }
    */

    // prime testing (primality test)
    int n;
    std::cin >> n;

    bool isprime = true;
    if (n <= 1)
    {
        isprime = false;
    }
    else
    {
        for (int d = 2; d < n; ++d)
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
        std::cout << n << " is prime\n";
    }
    else
    {
        std::cout << n << " is not a prime\n";
    }
    return 0;
}
