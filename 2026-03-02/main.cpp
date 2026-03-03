#include <iostream>
#include <cmath>

int main()
{
    // find sqrt(2) on [0, 2] using root by bisection on equation y = x^2 - 2.
    double a = 0.0;
    double b = 2.0;
    double error = 0.00001;

    double x0 = a;
    double x1 = b;
    double xmid, xmidprev = 0.0;
    while (1)
    {
        xmidprev = xmid;
        xmid = (x0 + x1) / 2.0;
        if (fabs(xmidprev - xmid) < error)
        {
            break;
        }
        
        double y0 = x0 * x0  - 2;
        double ymid = xmid * xmid  - 2;
        double y1 = x1 * x1  - 2;

        if ((y0 <= 0 && ymid >= 0)
            || (y0 >= 0 && ymid <= 0))
        {
            x1 = xmid;
        }
        else if ((y1 <= 0 && ymid >= 0)
                 || (y1 >= 0 && ymid <= 0))
        {
            x0 = xmid;
        }
        std::cout << "search in [" << x0 << ", " << x1 << "]\n";
    }
    std::cout << "xmid: " << xmid << '\n';

    return 0;
}
