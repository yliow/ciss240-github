#include <iostream>
#include <cmath>

int main()
{
    /*
    // input
    double a, b;
    int n; // number of points (not strips)
    std::cin >> a >> b >> n;

    // process
    double dx = (b - a) / (n - 1);
    double A = 0.0;

    for (int i = 0; i < n - 1; ++i)
    {
        double x = a + i * dx;
        double y = x * x;
        double dA = y * dx;
        A += dA;
        std::cout << i << ' ' << x << ' ' << y << ' ' << dA << ' ' << A << '\n';
    }

    // output
    std::cout << A << '\n';
    */

    // max of y = cos x + 2 sin (2x) from 0 to 3
    double a, b;
    int n; // number of points to test
    std::cin >> a >> b >> n;
    double dx = (b - a) / (n - 1);

    int max = cos(a) + 2 * sin(2 * a);
    int max_x = a;
    for (int i = 1; i < n; ++i)
    {
        double x = a + i * dx;
        double y = cos(x) + 2 * sin(2 * x);
        if (y > max)
        {
            max = y;
            max_x = x;
        }
    }
    
    return 0;
}
