#include <iostream>

int main()
{
    int n, x;
    std::cin >> n;
    int max;
    std::cin >> x;
    max = x;
    for (int i = 0; i < n - 1; ++i)
    {
        std::cin >> x;
        if (x > max)
        {
            max = x;
        }
    }

    int sentinel;
    std::cin >> sentinel;
}
