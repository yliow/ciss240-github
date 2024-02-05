#include <iostream>
#include <iomanip>

int main()
{
    // int x = 0, y = 4;
    // std::cout << x << ' ' << y << '\n'; // see 0 4

    // // swap values of x, y
    // int t = x; // t is "old x"
    // x = y;
    // y = t;

    // std::cout << x << ' ' << y << '\n'; // see 4 0


    // int x = 4, y = 2, z = -6;
    // std::cout << x << ' ' << y << ' ' << z << '\n';

    // int t = x;
    // int s = y;
    // x = z;
    // y = t;
    // z = s;
    
    // std::cout << x << ' ' << y << ' ' << z << '\n';


    std::cout << std::setw(5) << "n" << std::setw(5) << "n^3" << '\n';
    std::cout << std::setw(5) << "-" << std::setw(5) << "---" << '\n';

    for (int i = 0; i < 1000; ++i)
    {
        std::cout << std::setw(10) << i << std::setw(10) << i * i * i << '\n';
    }
    
    return 0;
}
