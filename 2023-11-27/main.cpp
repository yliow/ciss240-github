#include <iostream>
#include <cmath>


bool is_prime(int p)
{
    if (p == 1)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(p); ++d)
        {
            if (p % d == 0)
            {
                return false;
            }
        }
        return true;
    }
}


int main()
{
    // int x[5];
    // for (int i = 0; i < 5; ++i)
    // {
    //     std::cin >> x[i];
    // }

    // double y[10] = {0.1, 0.2, 0.3, 3.14};

    // char z[] = {'a', 'n', '$', 'w'};

    int prime[10];

    int p = 0;
    for (int i = 0; i < 10; ++i)
    {
        // compute the next prime after x and put into y
        p = p + 1;

        while (1)
        {
            if (is_prime(p))
            {
                std::cout << p << " is prime ...\n";
                break;
            }
            else
            {
                std::cout << p << " is not prime ...\n";
                ++p;
            }
        }
        
        prime[i] = p;
        std::cout << "put " << p << " at index " << i << '\n';
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ": " << prime[i] << '\n';
    }
    
    return 0;
}
