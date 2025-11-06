#include <iostream>
#include <cmath>

int main()
{
    /*
    int n ;
    std::cin >> n;

    for (int i = n - 1; i >= 0; --i)
    {
        //std::cout << i << ' ' << n << '\n';

        // draw i spaces
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        
        // draw n stars
        for (int j = 0; j < n; ++j)
        {
            std::cout << '*';
        }
        
        // draw newlin
        std::cout << '\n';
    }
    */

    /*
    for (int i = 0; i < 10; i += 2)
    {
        std::cout << "entered body\n";
        std::cout << i << '\n';
        if (i == 6)
        {
            break;
        }
        std::cout << "exiting body\n\n";
    }
    */

    /*
    int s = 0;
    // sum from 1 to 10 except ... do not include 5
    for (int i = 1; i <= 10; ++i)
    {
        if (i == 5)
        {
            continue;
        }
        s += i;
        std::cout << i << ' ' << s << '\n';
    }

    int s = 0;
    // sum from 1 to 10 except ... do not include 5
    for (int i = 1; i <= 10; ++i)
    {
        if (i != 5)
        {
            s += i;
            std::cout << i << ' ' << s << '\n';
        }
    }
    */


    // prime testing algorithm
    // primality test algorithm
    //int n;
    //std::cin >> n;

    for (int n = 2; n < 1000001; ++n)
    {
        bool isprime = true;
        for (int i = 2; i <= n; ++i)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
        
        std::cout << n << " is "
                  << (isprime ? "" : "not")
                  << " prime\n";
    }
    
    return 0;
}

