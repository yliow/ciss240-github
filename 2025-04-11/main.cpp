#include <iostream>

const int SIZE = 10;

int square(int x);
int sign(double x);
int sum(int n);
void f(int x);
void g(int & x);

int main()
{
    std::cout << square(3) << '\n';
    int i = 5;
    std::cout << square(i) << '\n';
    int j = square(i + 1);
    std::cout << j << '\n';

    std::cout << sign(5.37) << '\n';
    std::cout << sign(0.0) << '\n';
    std::cout << sign(-0.78) << '\n';

    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ' ' << sum(i) << '\n';
    }

    int x = 0;
    std::cout << x << '\n';
    std::cout << "going into f() ...\n";
    f(x);
    std::cout << "back in main() ...\n";
    std::cout << x << '\n';

    x = 0;
    g(x);
    std::cout << x << '\n';
    
    return 0;    
}

void g(int & x)
{
    x = 42;
}

void f(int y)
{
    y = 42;
    std::cout << "in f() ...\n";
    std::cout << y << '\n';
}

int sum(int n)
{
    int s = 0;
    for (int j = 0; j <= n; ++j)
    {
        s += j;
    }
    return s;
}

int square(int x)
{
    return x * x;
}

int sign(double x)
{
    if (x < 0.0)
    {
        return -1;
    }
    else if (x == 0.0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

