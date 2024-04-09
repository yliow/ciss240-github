#include <iostream>

const int N = 100;

int square(int);
double reciprocal(double);
int sign(double);
int sum(int);


int main()
{
    std::cout << square(5) << '\n';
    int i = square(6);
    std::cout << i << '\n';
    int j = 2 + 7 * square(2);
    std::cout << j << '\n';

    std::cout << reciprocal(2) << '\n';
    std::cout << reciprocal(100) << '\n';

    std::cout << sign(5.31) << '\n';
    std::cout << sign(0.0) << '\n';
    std::cout << sign(-3.14) << '\n';

    for (int n = 0; n < 4; ++n)
    {
        std::cout << n << ' ' << sum(n) << '\n';
    }
    return 0;
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


int sign(double x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


double reciprocal(double y)
{
    return 1.0 / y;
}


int square(int x)
{
    return x * x;
}
