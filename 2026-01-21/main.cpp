#include <iostream>

int main()
{
    // int m; // total minutes
    // std::cin >> m;
    
    // int dd, hh, mm;
    // dd = m / (60 * 24);
    // m = m - dd * (60 * 24);
    // hh = m / 60;
    // m = m - hh * 60;
    // mm = m;

    // std::cout << dd << ' ' << hh << ' ' << mm << '\n';

    // std::cout << "check:\n";
    // std::cout << dd * (60 * 24) + hh * 60 + mm << '\n';

    //std::cout << (2 ^ 4) << '\n'; //  ^ is not exponentiation!!!!!!
    // see CISS360 - assembly lang and computer systems

    // int x, y;
    // std::cin >> x;
    // std::cout << x + 1 << '\n';
    // int z;
    // std::cin >> y >> z;
    // std::cout << y + z << '\n';
    // x = 50;
    // std::cout << x << ' ' << y << ' ' << z << '\n';

    //std::cout << 60 % 3 << '\n';

    // std::cout << "to check 7 is prime ...\n";
    // std::cout << 7 % 2 << '\n';
    // std::cout << 7 % 3 << '\n';
    // std::cout << 7 % 4 << '\n';
    // std::cout << 7 % 5 << '\n';
    // std::cout << 7 % 6 << '\n';

    // int i;

    // i = 2;
    
    // std::cout << i << ": " << 1351 % i << '\n';
    // i = i + 1;
    // std::cout << i << ": " << 1351 % i << '\n';
    // i = i + 1;
    // std::cout << i << ": " << 1351 % i << '\n';
    // i = i + 1;
    // std::cout << i << ": " << 1351 % i << '\n';
    // i = i + 1;
    // std::cout << i << ": " << 1351 % i << '\n';
    // i = i + 1;


    int x = 58073;
    std::cout << x / 10 << '\n';
    std::cout << x / 100 << '\n';
    std::cout << x / 1000 << '\n';
    std::cout << x % 100 << '\n';
    std::cout << x % 1000 << '\n';
    std::cout << x % 10000 << '\n';
    int d0 = x % 10;
    int d1 = x % 100 / 10; // second rightmost digit
    int d2 = x % 1000 / 100; // second rightmost digit
    int d3 = x % 10000 / 1000; // secon rightmost digit
    int d4 = x % 100000 / 10000; // secon rightmost digit
    
    std::cout << d0 << '\n';
    std::cout << d1 << '\n';
    std::cout << d2 << '\n';
    std::cout << d3 << '\n';
    std::cout << d4 << '\n';
    int y = d4 * 10000 + d3 * 1000 + d2 * 100 + d1 * 10 + d0;
    std::cout << y << '\n';
    return 0;
}
