#include <iostream>

int sign(double x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int sum(int n)
{
    int s = 0;
    for (int i = 0; i <= n; ++i)
    {
        s += i;
    }
    return s;
}

int factorial(int n)
{
    int p = 1;
    for (int i = 1; i <= n; ++i)
    {
        p *= i;
    }
    return p;
}

int main()
{
    std::cout << sign(-4.2) << ' '
              << sign(0) << ' '
              << sign(3.14) << '\n';
    for (int i = 0; i < 5; ++i)
    {
        std::cout << sum(i) << '\n';
    }
    for (int i = 0; i < 5; ++i)
    {
        std::cout << factorial(i) << '\n';
    }
}
