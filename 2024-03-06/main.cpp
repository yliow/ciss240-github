#include <iostream>
#include <cmath>

int main()
{
    // double a, b; // interval where we look for root
    // int n;  // number of points to test
    // std::cin >> a >> b >> n;

    // double min_y;
    // double min_x;
    // double dx = (b - a) / (n - 1);

    // min_x = a;
    // min_y = fabs(3 * a * a - 10 * a * sin(a) - 500);
    // std::cout << a << ' ' << fabs(3 * a * a - 10 * a * sin(a) - 500)
    //           << ' ' << min_x << ' ' << min_y << '\n';

    // for (double x = a + dx; x <= b; x += dx)
    // {
    //     if (fabs(3 * x * x - 10 * x * sin(x) - 500) < min_y)
    //     {
    //         min_x = x;
    //         min_y = fabs(3 * x * x - 10 * x * sin(x) - 500);
    //     }
    //     std::cout << x << ' '
    //               << fabs(3 * x * x - 10 * x * sin(x) - 500) << ' '
    //               << min_x << ' ' 
    //               << min_y << '\n';
    // }
    // std::cout << min_x << ' ' << min_y << '\n';

    
    // double a, b;
    // int n;
    // std::cin >> a >> b >> n;

    // double max_x;
    // double max_y;

    // max_y = a * sin(a);
    // max_x = a;
    // std::cout << a << ' ' << a * sin(a) << ' '
    //           << max_x << ' ' << max_y << '\n';
    // double dx = (b - a) / (n - 1);
    // for (double x = a + dx; x <= b; x += dx)
    // {
    //     double y = x * sin(x);
    //     if (y > max_y)
    //     {
    //         max_y = y;
    //         max_x = x;
    //     }
    //     std::cout << x << ' ' << x * sin(x) << ' '
    //               << max_x << ' ' << max_y << '\n';
    // }
    // std::cout << max_x << ' ' << max_y << '\n';

    int i = 0;
    for (;;)
    {
        std::cout << i << '\n';
        ++i;
    }
    std::cout << "outside ... " << i << '\n';
    return 0;
}
