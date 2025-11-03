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

    /*
    // max of y = cos x + 2 sin (2x) from 0 to 3
    double a, b;
    int n; // number of points to test
    std::cin >> a >> b >> n;
    double dx = (b - a) / (n - 1);

    double max = cos(a) + 2 * sin(2 * a);
    double max_x = a;
    std::cout<< a << ' ' << max << ' ' << max << ' ' << max_x << '\n';
    
    for (int i = 1; i < n; ++i)
    {
        double x = a + i * dx;
        double y = cos(x) + 2 * sin(2 * x);
        if (y > max)
        {
            max = y;
            max_x = x;
        }
        std::cout<< x << ' ' << y << ' ' << max << ' ' << max_x << '\n';
    }
    std::cout << max << ' ' << max_x << '\n';
    */

    /*

    // root finding for sin x on [2, 4]
    double a, b;
    int n;
    std::cin >> a >> b >> n;
    double dx = (b - a) / (n - 1);

    double min, min_x;

    // first point i.e. x = a
    min = fabs(sin(a));
    min_x = a;
    
    for (int i = 1; i < n; ++i)
    {
        double x = a + i * dx;
        double y = fabs(sin(x));
        if (y < min)
        {
            min = y;
            min_x = x;
        }
        std::cout << x << ' ' << y << ' ' << min << ' ' << min_x << '\n';
    }
    std::cout << min << ' ' << min_x << '\n';
    */

    /*
    int i = 0;
    for(;;)
    //while (1)
    {
        std::cout << i << '\n';
        ++i;
    }
    std::cout << i << '\n';
    */

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "i:" << i << '\n';
        for (int j = 0; j < 3; ++j)
        {
            std::cout << "    j:" << j << '\n';
        }
    }
    
    return 0;
}
