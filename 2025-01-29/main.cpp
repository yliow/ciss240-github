#include <iostream>
#include <cmath>

int main()
{
    // std::cout << "area of circle\n";
    // double radius;
    // std::cin >> radius;
    // std::cout << "area of circle of radius " << radius << " is "
    //           << 3.14159 * radius * radius << '\n';

    char c = '$';
    std::cout << c << '\n';
    c = '\t';
    std::cout << c << '\n';
    std::cin >> c;
    std::cout << c << '\n';
    std::cout << c + 1 << '\n';

    int x = 'A';
    std::cout << x << '\n';
    char y = 65;
    std::cout << y << '\n';

    char s[100] = "hello world\n";
    std::cout << s << '\n';
    std::cin >> s;
    std::cout << "s:[" << s << "]\n";
    char t[100];
    std::cin >> t;
    std::cout << "t:[" << t << "]\n";

    std::cout << int(3.1) << '\n';
    double z = double(3);
    // double z = 3.0;
    double q = double(3);

    std::cout << int('A') << '\n';
    std::cout << char(65) << '\n';
    std::cout << (char) 65 << '\n';
    //char x;

    std::cout << pow(2, 0.5) << '\n';
    std::cout << sqrt(2) << '\n';
    return 0;
}
