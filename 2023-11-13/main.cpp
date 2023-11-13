#include <iostream>

int main()
{
    const int n = 8;
    int x[n];

    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 20;
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';     
    }
    std::cout << '\n';

    int max = x[0];
    int max_index = 0;
    std::cout << 0 << ' ' << x[0] << ' ' << max << ' ' << max_index << '\n';
    for (int i = 1; i < n; ++i)
    {
        if (x[i] > max)
        {
            max = x[i];
            max_index = i;
        }
        std::cout << i << ' ' << x[i] << ' ' << max << ' ' << max_index << '\n';
    }
    std::cout << "final max: " << max << ' ' << max_index << '\n';
    
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += x[i];
        std::cout << i << ' ' << x[i] << ' ' << sum << '\n';
    }
    std::cout << "final sum: " << sum << '\n';

    int a;
    std::cin >> a;
    int x_len = 0;

    while (a != 0)
    {
        int digit = a % 10;
        a /= 10;
        x[x_len] = digit;
        ++x_len;
        std::cout << a << ' ' << x[x_len - 1] << ' ' << x_len << '\n';
    }
    for (int i = 0; i < x_len; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';

    for (int j = n - 2; j >= 0; --j)
    {
        for (int i = 0; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
            for (int i = 0; i < n; ++i)
            {
                std::cout << x[i] << ' ';     
            }
            std::cout << '\n';
        }
    }
    return 0;
}
