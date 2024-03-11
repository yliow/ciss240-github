#include <iostream>

int main()
{
    // for (int i = 0; i < 5; ++i)
    // {
    //     std::cout << "i:" << i << '\n';
    //     for (int j = 0; j < 3; ++j)
    //     {
    //         std::cout << "    j:" << j << '\n';
    //     }
    // }

    // page 10
    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = 1; j < 4; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = 0; j <= i; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = 0; j < i; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = 0; j <= 2 * i; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = i; j <= 2 * i; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // page 12
    // int n;
    // std::cin >> n;

    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << ' ';
    // }
    // std::cout << '*' << '\n';

    // int n;
    // std::cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << '*';
    // }
    // std::cout << '\n';

    int w, h;
    std::cin >> w >> h;

    for (int j = 0; j < h; ++j)
    {
        // draw one row
        for (int i = 0; i < w; ++i)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    
    return 0;
}
