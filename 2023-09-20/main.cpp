#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    std::cout << x << ' ' << y << '\n';
    
    int t = x;
    x = y;
    y = t;

    std::cout << x << ' ' << y << '\n';
    
    return 0;
}
