#include <iostream>

int main()
{
    // std::cout << (!true) << '\n'
    //           << (!false) << '\n';

    // int x = 1;
    // int y = 5;
    // bool b = (x < y);
    // std::cout << (x < y) << ' ' << b << '\n';

    /*

       X      G0                            G1         
      ---------------------------------------------
             -3   -2    -1    0    1    2    3

     */
    int enemy_x = -5;
    bool in_range = false; // if fire now, will kill enemy
    std::cin >> enemy_x;
    std::cout << in_range << '\n';
    return 0;
}
