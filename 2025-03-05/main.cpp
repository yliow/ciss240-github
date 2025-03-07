#include <iostream>
#include <cmath>
#include <iomanip>

double factorial(int i)
{
    double fact = 1.0;
    for (int j = 1; j <= i; ++j)
    {
        fact *= j;
    }
    return fact;
}

int main()
{
    // int n; // number of points
    // double a, b;
    // std::cin >> n >> a >> b;

    // double dx = (b - a) / (n - 1);
    // double x = a;
    // double x3 = pow(x, 3);
    // double y = -5 * pow(x, 4) * sin(x3) - 3 * pow(x, 7) * cos(x3);
    // double ymax = y;
    // double xmax = x;
    // std::cout << 0 << ' ' << x << ' ' << y << ' ' << xmax << ' ' << ymax << '\n';

    // x += dx;
    // for (int i = 1; i < n; ++i)
    // {
    //     double x3 = pow(x, 3);
    //     double y = -5 * pow(x, 4) * sin(x3) - 3 * pow(x, 7) * cos(x3);
    //     if (y > ymax)
    //     {
    //         ymax = y;
    //         xmax = x;
    //     }
    //     std::cout << i << ' ' << x << ' ' << y << ' ' << xmax << ' ' << ymax << '\n';

    //     // for next iteration
    //     x += dx;
    // }

    double e = 0.0;
    for (int i = 0; i <= 30; ++i)
    {
        // fact is factorial of i
        double term = 1.0 / factorial(i);
        e += term;
        std::cout << i << ' ' << std::setprecision(20) << e << '\n';
    }
    std::cout << std::setprecision(20) << e << '\n';
}
    
