#include <iostream>
#include <iomanip>

int main()
{
    // double s = 0.0;
    // for (int i = 1; i <= 1000000; ++i)
    // {
    //     double term = long double (1.0) / i;
    //     s += term;
    //     std::cout << i << ' ' << term << ' '
    //               << std::setprecision(20) << s << '\n';
    // }
    // std::cout << "final s:" << std::setprecision(20) << s << '\n';


    // long long int p = 1;
    // for (int i = 1; i <= 30; ++i)
    // {
    //     int factor = i;
    //     p *= factor;
    //     std::cout << i << ' ' << factor << ' ' << p << '\n';
    // }
    // std::cout << "final p:" << p << '\n';

    // running min where ints are user inputs
    int x; // for input
    int min;

    std::cin >> x;
    min = x;

    for (int i = 0; i < 1000; ++i)
    {
        std::cin >> x;
        if (x < min)
        {
            min = x;
        }
        std::cout << x << ' ' << min << '\n';
    }
    std::cout << min << '\n';
    
    return 0;
}
