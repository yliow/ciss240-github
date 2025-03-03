#include <iostream>

int main()
{
    int n; // number of inputs from user
    std::cin >> n;

    int x;
    std::cout << "input " << 0 << ": ";
    std::cin >> x;

    // first data point
    max = x;
    std::cout << x << ' ' << max << '\n';

    // subsequent data points
    for (int i = 1; i < n; ++i)
    {
        std::cout << "input " << i << ": ";
        std::cin >> x;
        if (x > max)
        {
            max = x;
        }
        std::cout << x << ' ' << max << '\n';
    }
    return 0;
}
