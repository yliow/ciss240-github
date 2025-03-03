#include <iostream>

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

    // equally spaced points where n is NUMBER OF INTERVALS
    int n; // number of INTERVALS
    double a, b;
    std::cin >> n >> a >> b;
    double d = (b - a) / n;
    double x = a;
    for (int i = 0; i <= n; ++i)
    {
        std::cout << x << '\n';

        x += d;
    }
    

    
    return 0;
}
