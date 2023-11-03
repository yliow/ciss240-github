#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = n - 1; i >= 0; --i)
    {
        std::cout << i << ' ' << 2 * n - 3 - 2 * i << '\n';
    }
    return 0;
}
