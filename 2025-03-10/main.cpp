#include <iostream>

int main()
{
    // for (int i = 3; i < 6; ++i)
    // {
    //     std::cout << i << '\n';
    //     for (int j = i; j <= 2 * i; ++j)
    //     {
    //         std::cout << ' ' << j;
    //     }
    //     std::cout << '\n';
    // }

    // // star from left
    // int n;
    // std::cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << ' ';
    // }
    // std::cout << '*';
    // std::cout << '\n';

    // number of stars
    //int n;
    //std::cin >> n;
    //for (int i = 0; i < n; ++i)
    //{
    //    std::cout << '*';
    //}
    //std::cout << '\n';

    // // rect ascii art
    // int w, h;
    // std::cin >> w >> h;

    // for (int i = 0; i < h; ++i)
    // {
    //     // draw a line of length w
    //     for (int j = 0; j < w; ++j)
    //     {
    //         std::cout << '*';
    //     }
    //     std::cout << '\n';
    // }

    // // right angle triangle ascii art (corner=BL)
    // int n;
    // std::cin >> n;
    // for (int i = 1; i <= n; ++i)
    // {
    //     // print i '*'s
    //     for (int j = 0; j < i; ++j)
    //     {
    //         std::cout << '*';
    //     }
    //     std::cout << '\n';
    // }

    int n;
    std::cin >> n;

    for (int i = n - 1; i >= 0; --i)
    {
        //std::cout << i << ' '; // spaces
        for (int j = 1; j <= i; ++j)
        {
            std::cout << ' ';
        }
        
        //std::cout << n;
        for (int j = 1; j <= n; ++j)
        {
            std::cout << '*';
        }
        
        std::cout << '\n';
    }
    
    return 0;
}
