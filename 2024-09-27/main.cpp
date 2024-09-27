#include <iostream>
#include <cmath>

int main()
{
    double x;       // enemy position
    double A_x;     // Gun A position
    double A_range; // Gun A's range
    double B_x;     // Gun B position
    double B_range; // Gun B's range

    std::cin >> x >> A_x >> A_range;

    bool A_in_range = (A_x - A_range <= x && x <= A_x + A_range);
    //std::cout << A_in_range << '\n';

    // or
    // bool A_in_range = abs(x - A_x) <= A_range

    bool B_in_range = (B_x - B_range <= x && x <= B_x + B_range);
    //std::cout << B_in_range << '\n';

    bool in_range = A_in_range || B_in_range;
    std::cout << in_range << '\n';
    
    return 0;
}
