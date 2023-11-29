#include <iostream>
#include <cstring>
#include <cmath>

int mystrlen(char s[])
{
    int len = 0;
    for (int i = 0; i < 1024; ++i)
    {
        if (s[i] == '\0')
        {
            break;
        }
        ++len;
        //std::cout << s[i] << ' ' << len << '\n';
    }
    return len;
}

int square(int x)
{
    return x * x;
}
int cube(int x)
{
    return x * x * x;
}

double mypow(double a, int n)
{
    double p = 1.0;
    for (int i = 0; i < n; ++i)
    {
        p *= a;
    }
    return p;
}


double mysin(double x)
{
    return x - (1.0/6) * x * x * x + (1.0/120) * x * x * x * x * x;
}

int main()
{
    char s[1024] = "hello wor5ld\0asdasdasdasdasdasd\0asdasd\0";
    
    // uppercase computation
    for (int i = 0; i < mystrlen(s); ++i)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    std::cout << s << '\n';

    std::cout << mystrlen(s) << '\n';
    std::cout << strlen(s) << '\n';

    std::cout << square(5) << '\n';
    
    return 0;
}
