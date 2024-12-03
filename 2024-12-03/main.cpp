#include <iostream>
#include <cmath>

bool isprime(int);
int numdigits(int);
int max(int, int);
double avg(int x, int y);

void inc0(int i)
{
    std::cout << "in inc0 ... i:" << i << '\n';
    ++i;
    std::cout <<"in inc0 ... i:" << i << '\n';
}
void inc1(int & i)
{
    std::cout << "in inc1 ... i:" << i << '\n';
    ++i;
    std::cout <<"in inc1 ... i:" << i << '\n';
}
void swap0(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}
void swap1(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}
    
int main()
{
    // for (int n = 0; n < 20; ++n)
    // {
    //     std::cout << n << ": " << isprime(n) << '\n';
    // }

    // for (int n = 123124; n < 123135; ++n)
    // {
    //     std::cout << n << ": " << numdigits(n) << '\n';
    // }

    // std::cout << max(2, 5) << '\n';
    // std::cout << max(5, 2) << '\n';
    // std::cout << avg(5, 2) << '\n';

    // int i = 0;
    // inc0(i);
    // std::cout << "in main ... i:" << i << '\n';

    // int i = 0;
    // inc1(i);
    // std::cout << "in main ... i:" << i << '\n';

    int a = 2, b = 5;
    swap0(a, b);
    std::cout << "a, b:" << a << ' ' << b << '\n';
    swap1(a, b);
    std::cout << "a, b:" << a << ' ' << b << '\n';
    
    return 0;
}

int numdigits(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int c = 0;
        while (n != 0)
        {
            n /= 10;
            ++c;
        }
        return c;
    }
}

bool isprime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int max(int i, int j)
{
    // if (i >= j)
    // {
    //     return i;
    // }
    // else
    // {
    //     return j;
    // }
    return (i >= j ? i : j);
}

double avg(int x, int y)
{
    return (x + y) / 2.0;
}
