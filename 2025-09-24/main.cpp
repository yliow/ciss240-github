#include <iostream>

int main()
{
    bool i_am_studying_cpp = true;
    bool i_am_10_ft_tall = true;

    // std::cout << (i_am_studying_cpp && i_am_10_ft_tall) << ' '
    //           << (i_am_10_ft_tall && i_am_studying_cpp) << '\n';

    // std::cout << (i_am_studying_cpp && i_am_studying_cpp) << ' '
    //           << i_am_studying_cpp << '\n';

    // std::cout<< (!true) << '\n';
    // std::cout<< (!false) << '\n';

    int x = 1, y = 2;
    std::cout << (x < y) << '\n';
    std::cout << (x <= y) << '\n';
    std::cout << (x > y) << '\n';
    std::cout << (x == y) << '\n';
    std::cout << (x != y) << '\n';
    
    return 0;
}
