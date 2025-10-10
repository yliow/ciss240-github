#include <iostream>

int main()
{
    int x0, x1, x2;
    std::cin >> x0 >> x1 >> x2;

    int t;
    std::cout << "Pass 1\n";
    if (x0 > x1)
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    
    return 0;
}
