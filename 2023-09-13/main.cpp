#include <iostream>

int main()
{
    // int n;
    // std::cin >> n; // test cases: 35, 7

    for (int n = 2; n < 100000; ++n)
    {
        bool isprime = true;
        for (int d = 2; d < n; ++d)
        {
            if (n % d == 0)
            {
                // std::cout << "found divisor ... " << d << '\n';
                isprime = false;
                break;
            }
        }
        
        if (isprime)
        {
            std::cout << n << " is prime\n";
        }
        else
        {
            //std::cout << n << " is not prime\n";
        }
    }
    
    return 0;
}
