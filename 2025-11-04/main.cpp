#include <iostream>

int main()
{
    /*
    // draw star n away
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        std::cout << ' ';
    }
    std::cout << '*' << '\n';
    */

    /*
    // draws n stars
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cout << '*';
    }
    std::cout << '\n';
    */

    /*
    // draw a rect of width w, height h
    int w, h;
    std::cin >> w >> h;

    for (int i = 0; i < h; ++i)
    {
        // draw a line of w stars
        for (int j = 0; j < w; ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    */

    // draw rt angle tri, rt angle at bottom left
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        // draw i stars
        for (int j = 1; j <= i; ++j)
        {
            std::cout << '*';
        }
        
        // draw newline
        std::cout << '\n';
    }

    return 0;
}
