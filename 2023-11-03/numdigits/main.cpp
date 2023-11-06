#include <iostream>

int numdigits(int n)
{
    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            ++count;
            //std::cout << n << ' ' << count << '\n';
        }
    }
    return count;
}

int main()
{
    int n;
    std::cin >> n;

    // compute number of digits in n
    std::cout << numdigits(n) << '\n';
    return 0;
}
