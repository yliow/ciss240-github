#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    // number of digits of x computation ...
    int n = 0; // num of digits of x
    int old_x = x;
    if (x == 0)
    {
        n = 1;
    }
    else
    {
        for (; x != 0;)
        {
            ++n;
            x /= 10;
        }
    }
    std::cout << "final ... " << n << '\n';

    return 0;
}
