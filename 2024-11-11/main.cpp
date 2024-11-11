#include <iostream>

int num_digits(int n)
{
    int numdigits = 0;
    if (n == 0)
    {
        numdigits = 1;
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
    int n;
    std::cin >> n;
    int numdigits = num_digits(n);
    std::cout << numdigits << '\n';
    
    return 0;
}
