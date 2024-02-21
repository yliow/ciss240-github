#include <iostream>

int main()
{
    // int x0 = 1, x1  = 3, x2 = 0, x3 = 5;
    // int max;
    
    // max = x0;
    // std::cout << x0 << ' ' << max << '\n';
    
    // if (x1 > max)
    // {
    //     max = x1;
    // }
    // std::cout << x1 << ' ' << max << '\n';
    
    // if (x2 > max)
    // {
    //     max = x2;
    // }
    // std::cout << x2 << ' ' << max << '\n';

    // if (x3 > max)
    // {
    //     max = x3;
    // }
    // std::cout << x3 << ' ' << max << '\n';

    // running minimum computation
    
    int x0 = 1, x1  = 3, x2 = 0, x3 = 5;
    int min;
    
    min = x0;
    std::cout << x0 << ' ' << min << '\n';
    
    if (x1 < min)
    {
        min = x1;
    }
    std::cout << x1 << ' ' << min << '\n';
    
    if (x2 < min)
    {
        min = x2;
    }
    std::cout << x2 << ' ' << min << '\n';

    if (x3 < min)
    {
        min = x3;
    }
    std::cout << x3 << ' ' << min << '\n';

    return 0;
}
