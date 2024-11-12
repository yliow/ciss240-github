#include <iostream>

int num_digits(int n)
{
    int numdigits = 0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            ++numdigits;
        }
    }
    return numdigits;
}

int main()
{
    // compute number of digits in an int
    /*
    int n;
    std::cin >> n;
    int numdigits = num_digits(n);
    std::cout << numdigits << '\n';
    */

    // compute 1/1^2 + ... + 1/10^2
    double s0 = 0.0; // think previous
    double s1 = 0.0; // think of this as "now"
    while (???????)
    {
        double term = 1.0 / (i * i);
        s1 += term;
        std::cout << i << ' ' << term << ' ' << s1 << '\n';

        // ---------------

        s0 = s1;
        
    }
    std::cout << s << '\n';

    
    return 0;
}
