#include <iostream>

int main()
{
    // for (int i = 0; i < 20; i += 2)
    // {
    //     std::cout << "top of loop\n";
    //     std::cout << i << '\n';
    //     if (i > 10)
    //     {
    //         continue;
    //     }
    //     std::cout << "bottom of loop\n";
    // }
    // std::cout << "out of loop\n";

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            std::cout << i << '\n';
        }
    }
    
    return 0;
}
