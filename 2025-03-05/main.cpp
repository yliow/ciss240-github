#include <iostream>
#include <cmath>
int main()
{
    int n; // number of points
    double a, b;
    std::cin >> n >> a >> b;

    double dx = (b - a) / (n - 1);
    double x = a;
    double x3 = pow(x, 3);
    double y = -5 * pow(x, 4) * sin(x3) - 3 * pow(x, 7) * cos(x3);
    double ymax = y;
    double xmax = x;
    std::cout << 0 << ' ' << x << ' ' << y << ' ' << xmax << ' ' << ymax << '\n';

    for (int i = 1; i < n; ++i)
    {
        double x3 = pow(x, 3);
        double y = -5 * pow(x, 4) * sin(x3) - 3 * pow(x, 7) * cos(x3);
        if (y > ymax)
        {
            ymax = y;
            xmax = x;
        }
        std::cout << i << ' ' << x << ' ' << y << ' ' << xmax << ' ' << ymax << '\n';
        
    }
}
    
