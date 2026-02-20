#include <iostream>
#include <cmath>

int main()
{
    // const double pi = 3.14159365;
    
    // // area under sin x
    // double a = 0.0;
    // double b = pi / 2.0;
    // int n; // number of intervals (not points)
    // std::cin >> n;
    // double A = 0.0;
    // double x = a;
    // double dx = (b - a) / n;
    // for (int i = 0; i < n; ++i)
    // {
    //     double dA = sin(x) * dx;
    //     A += dA;
    //     std::cout << i << ' ' << dA << ' ' << A << '\n';
    // }
    // std::cout << "area under sin x: " << A << '\n';
    
    // // area of circle radius 1
    // double a = 0;
    // double b = 1;
    // std::cin >> n;
    // A = 0;
    // x = a;
    // dx = (b - a) / n;
    // for (int i = 0; i < n; ++i)
    // {
    //     double y = sqrt(1 - x * x);
    //     d
    //     A += dA;
    //     std::cout << i << ' ' << dA << ' ' << A << '\n';
    // }
    // std::cout << "area of quarter circle: " << A << '\n';
    // std::cout << "area of circle: " << 4 * A << '\n';

    // double a, b;
    // int n; // number of points
    // std::cin >> a >> b >> n;
    // double dx = (b - a) / (n - 1);
    // double x = a;
    // double min;
    // double min_x;
    
    // double y = fabs(3 * x * x - 10 * x * sin(x) - 500);
    // min = y;
    // min_x = x;
    // std::cout << x << ' ' << y << ' ' << min << '\n';

    // for (int i = 0; i < n - 1; ++i)
    // {
    //     double y = fabs(3 * x * x - 10 * x * sin(x) - 500);
    //     if (y < min)
    //     {
    //         min = y;
    //         min_x = x;
    //     }
    //     std::cout << x << ' ' << y << ' '
    //               << min_x << ' ' << min << '\n';
    //     x += dx;
    // }
    // std::cout << min_x << '\n';

    // exercise find max of function (1/x) sin (1/x) on
    // [1, 5]
    double a = 0.1;
    double b = 5.0;
    int n; // number of points
    std::cin >> n;
    double dx = (b - a) / (n - 1);
    double x = a;
    double max;
    double y = (1/x) * sin(1/x);
    max = y;
    for (int i = 0; i < n - 1; ++i)
    {
        double y = (1.0 / x) * sin(1.0 / x);
        if (y > max)
        {
            max = y;
        }
        x += dx;
        std::cout << x << ' ' << y << ' ' << max << '\n';
    }
    std::cout << max << '\n';
    return 0;
    
}
