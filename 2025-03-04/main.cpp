#include <iostream>
#include <cmath>

int main()
{
    // int n; // number of inputs from user
    // std::cin >> n;

    // int x, max;
    // std::cout << "input " << 0 << ": ";
    // std::cin >> x;
    
    // // first data point
    // max = x;
    // std::cout << x << ' ' << max << '\n';

    // // subsequent data points
    // for (int i = 1; i < n; ++i)
    // {
    //     std::cout << "input " << i << ": ";
    //     std::cin >> x;
    //     if (x > max)
    //     {
    //         max = x;
    //     }
    //     std::cout << x << ' ' << max << '\n';
    // }

    // equally spaced points by specifying NUMBER OF POINTS
    // int n; // number of points
    // double a, b;
    // std::cin >> n >> a >> b;
    // double d = (b - a) / (n - 1);
    // double x = a;
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << x << '\n';

    //     x += d;
    // }

    // // equally spaced points where n is NUMBER OF INTERVALS
    // int n; // number of INTERVALS
    // double a, b;
    // std::cin >> n >> a >> b;
    // double d = (b - a) / n;
    // double x = a;
    // for (int i = 0; i <= n; ++i)
    // {
    //     std::cout << x << '\n';

    //     x += d;
    // }
    
    // // area under parabola by specifying number of points
    // int n;
    // double a, b;
    // std::cin >> n >> a >> b;
    
    // double dx = (b - a) / (n - 1);
    // double s = 0.0;
    // double x = a;
    // for (int i = 1; i < n; ++i)
    // {
    //     double y = x * x;
    //     double term = y * dx;
    //     s += term;
    //     std::cout << i << ' ' << x << ' ' << dx << ' ' << y << ' ' << term
    //               << ' ' << s << '\n';
        
    //     // update x for NEXT iteration
    //     x += dx;
    // }

    // std::cout << "final s:" << s << '\n';


    // root finding for 3x^2 - 10x sin(x) - 500 on [0, 20]
    int n; // num points
    double a, b;
    std::cin >> n >> a >> b;

    double dx = (b - a) / (n - 1);

    double min;
    double root;

    double x = a;
    double y = fabs(3 * x * x - 10 * x * sin(x) - 500);
    min = y;
    root = x;

    x += dx;
    for (int i = 1; i < n; ++i)
    {
        y = fabs(3 * x * x - 10 * x * sin(x) - 500);
        if (y < min)
        {
            min = y;
            root = x;
        }
        std::cout << i << ' ' << x << ' ' << y << ' ' << min << ' ' << root << '\n';

        // this is update of x for the NEXT ITERATION
        x += dx;
    }

    std::cout << root << '\n';
    return 0;
}
