#include <iostream>
#include <iomanip>

int main()
{
    // double x = 1.2, y = 3.4;
    // std::cout << std::setprecision(20) << x + y << '\n'
    //           << std::setprecision(20) << x - y << '\n'
    //           << std::setprecision(20) << x * y << '\n'
    //           << std::setprecision(20) << x / y << '\n';

    double x, y;
    int width;
    int precision;

    std::cin >> x >> y >> width >> precision;
    std::cout << std::setw(width)
              << std::setprecision(precision)
              << x + y << '\n';
    
    return 0;
}
