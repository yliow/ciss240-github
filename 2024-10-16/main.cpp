#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // int start, end;
    // std::cin >> start >> end;
    
    // std::cout << std::setw(8) << "n"
    //           << std::setw(8) << "n^2" << '\n';
    // std::cout << std::setw(8) << "---"
    //           << std::setw(8) << "---" << '\n';
    // for (int i = start; i < end + 1; ++i)
    // {
    //     std::cout << std::setw(8) << i
    //               << std::setw(8) << i * i << '\n';
    // }
    
    // const double PI = 3.14159;
    // for (double x = 0.0; x < PI / 2; x += 0.1)
    // {
    //     std::cout << x << ' ' << sin(x) << '\n';
    // }

    // std::cout << x << '\n';
    // int x = 5;

    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << i << '\n';
    // }
    // std::cout << "i???" << i << '\n';

    // int s = 0;

    // for (int i = 1; i < 6; ++i)
    // {
    //     std::cout << '\n';
    //     std::cout << "top ..." << i << ' ' << s << '\n';
    //     s = s + i;
    //     std::cout << "bottom ..." << i << ' ' << s << '\n';

    // }
    // std::cout << "final s:" << s << '\n';


    // sum of 1*1 + ... + 5*5
    // int s = 0;
    // for (int i = 1; i < 6; ++i)
    // {
    //     s += i * i;
    //     std::cout << i << ' ' << s << '\n';
    // }
    // std::cout << s << '\n'; 

    double s = 0;
    for (int i = 1; i < 6; ++i)
    {
        s += 1.0 / (i * i);
        std::cout << i << ' ' << 1.0 / (i * i) << ' ' << s << '\n';
    }
    return 0;
}
