#include <iostream>
#include <iomanip>

int main()
{
    // double x = 1.2, y = 3.4;
    // std::cout << std::setprecision(20) << x + y << '\n'
    //           << std::setprecision(20) << x - y << '\n'
    //           << std::setprecision(20) << x * y << '\n'
    //           << std::setprecision(20) << x / y << '\n';

    // double x, y;
    // int width;
    // int precision;

    // std::cin >> x >> y >> width >> precision;
    // std::cout << std::setw(width)
    //           << std::setprecision(precision)
    //           << x + y << '\n';

    // char x = '$';
    // char y = '\n';
    // // std::cout << '[' << x << ']' << '\n'
    // //           << '[' << y << ']' << '\n';
    // std::cout << "what's your fav character? ";
    // std::cin >> x;
    // std::cout << x << "? ... not bad\n";   

    char s[100] = "Frodo lives!";
    std::cout << s << '\n';
    std::cin >> s;
    std::cout << s << '\n';
    char t[100];
    std::cin >> t;
    std::cout << t << '\n';
    return 0;
}
