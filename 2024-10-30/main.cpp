#include <iostream>

int main()
{
    for (int i = 3; i < 6; ++i)
    {
        std::cout << i << '\n';
        for (int j = i; j <= 2 * i; ++j)
        {
            std::cout << ' ' << j;
        }
        std::cout << '\n';
    }

    return 0;
}
