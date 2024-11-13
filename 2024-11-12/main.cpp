#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double error;
    std::cin >> error;

    double s0;
    double s1 = 0.0;
    double i = 1;

    while (1)
    {
        s0 = s1;
        s1 = s1 + 1.0 / (i * i);
        std::cout << i << ' '
                  << std::setprecision(20) << s0 << ' '
                  << std::setprecision(20) << s1 << ' '
                  << std::setprecision(20) << fabs(s1 - s0) << '\n';
        if (fabs(s1 - s0) < error)
        {
            break;
        }
        //--------
        ++i;
    }
    std::cout << s1 << '\n';
    return 0;
}
