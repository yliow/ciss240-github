#include <iostream>
#include <iomanip>

int main()
{
    std::cout << 3.1415 << '\n'
              << 3.14E10 << '\n'
              << 3.444444444444444444444444e-2 << '\n';

    std::cout << '[' << std::setw(10) << 3.14 << ']'
              << "    "
              << '[' << std::setw(20) << 3.14 << ']'
              << '\n';


    //print table of squares:
    // n  n^2
    // -  ---
    // 0    0
    // 1    1
    // 2    4
    // 3    9
    std::cout << std::setw(5) << "n" << std::setw(5) << "n^2" << '\n'
              << std::setw(5) << "-" << std::setw(5) << "---" << '\n'
              << std::setw(5) << 0 << std::setw(5) << 0 * 0 << '\n'
              << std::setw(5) << 1 << std::setw(5) << 1 * 1 << '\n'
              << std::setw(5) << 2 << std::setw(5) << 2 * 2 << '\n';

    int i = 0;
    
    std::cout << std::setw(5) << i << std::setw(5) << i * i << '\n';
    i = i + 1;

    std::cout << std::setw(5) << i << std::setw(5) << i * i << '\n';
    i = i + 1;

    std::cout << std::setw(5) << i << std::setw(5) << i * i << '\n';
    i = i + 1;


    std::cout << '[' << std::setfill('*') << std::setw(10) << 3.14 << ']'
              << "    "
              << '[' << std::setfill('@') << std::setw(20) << 3.14 << ']'
              << '\n';

    std::cout << '[' << std::setfill(' ') << std::left << std::setw(10) << 3.14 << ']'
              << "    "
              << '[' << std::setfill(' ') << std::right << std::setw(20) << 3.14 << ']'
              << '\n';

    std::cout << std::setprecision(20) << 3.1415926535897 << '\n';

    std::cout << std::setprecision(2) << 0.5 + 0.5 << '\n';
    std::cout << std::setprecision(50) << 0.1 << '\n';
    return 0;
}
