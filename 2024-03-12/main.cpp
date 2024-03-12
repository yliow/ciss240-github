#include <iostream>

int main()
{
    // for (int x = 0; x <= 10; ++x)
    // {
    //     if (x * x * x == 729)
    //     {
    //         std::cout << "x = " << x << '\n';
    //     }
    // }

    // for (int x = 0; x <= 13; ++x)
    // {
    //     for (int y = x; y <= 13; ++y)
    //     {
    //         if (x * x + y * y == 13 * 13)
    //         {
    //             std::cout << x << ' ' << y << '\n';
    //         }
    //     }
    // }

    for (int z = 1; z <= 100; ++z)
    {
        for (int x = 0; x <= z; ++x)
        {
            for (int y = x; y <= z; ++y)
            {
                if (x * x + y * y == z * z)
                {
                    std::cout << x << ' ' << y << ' '
                              << z << '\n';
                }
            }
        }
    }
    
    return 0;
}
