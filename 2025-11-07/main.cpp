#include <iostream>

int main()
{
    // int s = 0;
    // int i = 1;
    // while (i <= 10)
    // {
    //     s += i;
    //     std::cout << "i:" << i
    //               << " s:" << s << '\n';

    //     ++i;
    // }
    // std::cout << s << '\n';

    int n;
    std::cin >> n;

    int num_spaces = 0;
    for (int i = 1; i <= n - 1; ++i)
    {
        int term = 2 * i - 1;
        num_spaces += term;
    }
    for (int i = 0; i < num_spaces; ++i)
    {
        std::cout << ' ';
    }
    int num_stars = 2 * n - 1;
    for (int i = 0; i < num_stars; ++i)
    {
        std::cout << '*';
    }
    
    return 0;
}
