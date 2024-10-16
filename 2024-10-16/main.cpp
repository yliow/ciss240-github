#include <iostream>
#include <iomanip>

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

    for (double x = 3.1; x < 7.2; x += 0.1)
    {
        std::cout << x << '\n';
    }
    
    return 0;
}
