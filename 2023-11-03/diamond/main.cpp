#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        std::cout << (i == n - 1 || i == 0 ? '+' : '/');
        if (2 * n - 3 - 2 * i > 0)
        {
            for (int j = 0; j < 2 * n - 3 - 2 * i; ++j)
            {
                std::cout << (j % 2 == 0 ? ' ' : '*');
            }
            std::cout << '\\';
        }
        std::cout << '\n';
    }

    for (int i = 1; i <= n - 1; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        std::cout << '\\';
        if (2 * n - 3 - 2 * i > 0)
        {
            for (int j = 0; j < 2 * n - 3 - 2 * i; ++j)
            {
                std::cout << (j % 2 == 0 ? ' ' : '*');
            }
            std::cout << '/';
        }
        std::cout << '\n';
    }

    return 0;
}
