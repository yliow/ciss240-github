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
    
    // int x0 = 1, x1  = 3, x2 = 0, x3 = 5;
    // int min;
    
    // min = x0;
    // std::cout << x0 << ' ' << min << '\n';
    
    // if (x1 < min)
    // {
    //     min = x1;
    // }
    // std::cout << x1 << ' ' << min << '\n';
    
    // if (x2 < min)
    // {
    //     min = x2;
    // }
    // std::cout << x2 << ' ' << min << '\n';

    // if (x3 < min)
    // {
    //     min = x3;
    // }
    // std::cout << x3 << ' ' << min << '\n';

    int x0 = 0, x1 = 3, x2 = 0, x3 = 1, x4 = 3;
    int target = 42;
    int count = 0;

    if (x0 == target)
    {
        count = count + 1;
    }
    std::cout << x0 << ' ' << count << '\n';

    if (x1 == target)
    {
        count = count + 1;
    }
    std::cout << x1 << ' ' << count << '\n';

    if (x2 == target)
    {
        count = count + 1;
    }
    std::cout << x2 << ' ' << count << '\n';

    if (x3 == target)
    {
        count = count + 1;
    }
    std::cout << x3 << ' ' << count << '\n';

    if (x4 == target)
    {
        count = count + 1;
    }
    std::cout << x4 << ' ' << count << '\n';
    
    return 0;
}
