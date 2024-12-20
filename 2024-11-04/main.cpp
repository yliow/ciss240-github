#include <iostream>
#include <cmath>

bool is_prime(int n)
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
    }
    return true;
}

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
    //int n;
    //std::cin >> n;

    /*
    for (int n = 1; n <= 100000; ++n)
    {
        if (is_prime(n))
        {
            std::cout << n << " is prime\n";
        }
        // else
        // {
        //     std::cout << n << " is not a prime\n";
        // }
    }
    */


    // find pythogaras triples where hypothenuse is z given by user
    int z;
    std:: cin >> z;
    for (int x = 1; x <= z; ++x)
    {
        for (int y = x; y <= z; ++y)
        {
            if (x * x + y * y == z * z)
            {
                std::cout << x << ' ' << y << ' ' << z << '\n';
            }
        }
    }

    
    return 0;
}
