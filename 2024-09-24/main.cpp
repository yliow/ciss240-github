#include <iostream>

int main()
{
    std::cout << true << ' ' << false << '\n';

    bool i_am_leaning_cpp = true;
    bool i_am_a_student_at_cc = true;
    std::cout << (i_am_leaning_cpp && i_am_a_student_at_cc) << '\n';

    std::cout << (true && true) << '\n'
              << (true && false) << '\n'
              << (false && true) << '\n'
              << (false && false) << '\n';

    std::cout << (true || true) << '\n'
              << (true || false) << '\n'
              << (false || true) << '\n'
              << (false || false) << '\n';

    std::cout << (!true) << '\n'
              << (!false) << '\n';


    int x = 0, y = 1;
    std::cout << (x == y) << '\n'
              << (x != y) << '\n'
              << (x < y) << '\n'
              << (x <= y) << '\n'
              << (x > y) << '\n'
              << (x >= y) << '\n';
              
    return 0;
}
