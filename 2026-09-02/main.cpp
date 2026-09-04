#include <iostream>
#include <ctime>
#include <cstdlib>

void draw_line(int n, char even_char='*', char odd_char='*',
               bool newline=true)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << (i % 2 == 0 ? even_char : odd_char);
    }
    if (newline)
        std::cout << '\n';
}

void draw_bottom_right_tri(int n)
{
    for (int nspaces = n - 1; nspaces >= 0; --nspaces)
    {
        // nspaces + nstars = n
        // nstars = n - nspaces
        int nstars = n - nspaces;
        draw_line(nspaces, ' ', ' ', false);
        draw_line(nstars, '*', '*');
    }
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

int GCD(int a, int b)
{
    int max_d = 1;
    for (int d = min(a, b); d >= 1; --d)
    {
        if (a % d == 0 && b % d == 0)
        {
            return d;
        }
    }
    return 1;
}

void add_fraction(int & sumn, int & sumd,
                  int xn, int xd,
                  int yn, int yd)
{
    sumn = xn * yd + xd * yn;
    sumd = xd * yd;

    // reduce fraction
    int g = GCD(sumn, sumd);
    sumn /= g;
    sumd /= g;
}

int main()
{
    int n;
    std::cin >> n;
    // draw_line(n);
    // draw_line(n, '*', '@');
    // draw_line(n, '!', '$');
    //draw_bottom_right_tri(n);
    std::cout << numdigits(n) << '\n';
    return 0;
}
