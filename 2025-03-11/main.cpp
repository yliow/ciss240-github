#include <iostream>

int main()
{
    // draw nxn empty box
    int n;
    std::cin >> n;

    // draw top of box
    for (int i = 0; i < n; ++i)
    {
        std::cout << '*';
    }
    std::cout << '\n';

    // draw all the sides of the box
    for (int i = 0; i < n - 2; ++i)
    {
        // draw 1 line of the sides of box
        std::cout << '*';
        for (int j = 0; j < n - 2; ++j)
        {
            std::cout << ' ';
        }
        std::cout << '*' << '\n';
    }

    
    // draw bottom of box
    for (int i = 0; i < n; ++i)
    {
        std::cout << '*';
    }
    std::cout << '\n';


    return 0;
}
