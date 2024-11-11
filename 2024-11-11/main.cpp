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
    double s = 0;
    for (int i = 1; i <= 1000000000; ++i)
    {
        double term = 1.0 / (i * i);
        s += term;
        std::cout << i << ' ' << term << ' ' << s << '\n';
    }
    std::cout << s << '\n';

    
    return 0;
}
