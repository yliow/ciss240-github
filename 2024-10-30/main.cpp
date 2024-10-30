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

    // draw n spaces then 1 star
    /*
    int n;
    std::cin >> n;

    // draw n spaces
    for (int i = 0; i < n; ++i)
    {
        std::cout << ' ';
    }
    std::cout << '*';
    std::cout << '\n';
    */

    /* draw rect
    int w, h;
    std::cin >> w >> h;
    
    // draw box of 3x5
    for (int j = 0; j < h; ++j)
    {
        // draw line of width 5
        for (int i = 0; i < w; ++i)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    */

    // draw rt angle triangle, rt angle bottom left
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        // draw i stars
        for (int j = 0; j < i; ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    
    return 0;
}
