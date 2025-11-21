#include <iostream>

int main()
{
    int x[5];
    double y[10];
    const int n = 15;
    char z[n];
    char w[n * n + 5];
    // int s;
    // std::cin >> s;
    // bool u[s]; // WRONG

    int a[4] = {5, 3, 1, 2};
    int b[4];
    // b = a ... WRONG
    for (int i = 0; i < 4; ++i)
    {
        b[i] = a[i];
    }
    std::cout << b << '\n';
    for (int i = 0; i < 4; ++i)
    {
        std::cout << b[i] << ' ';
    }
    std::cout << '\n';

    int i;
    std::cout << sizeof(i) << '\n';
    std::cout << sizeof(int) << '\n';
    double j;
    std::cout << sizeof(j) << '\n';
    std::cout << sizeof(double) << '\n';
    char c;
    std::cout << sizeof(c) << '\n';

    std::cout << sizeof(a) << '\n';

    int d[1000] = {0};

    double f[] = {5.4, 1.2, 5.9, 3.14, 2.718};
    double max = f[0];
    std::cout << 0 << ' '
              << f[0] << ' '
              << max << '\n';
    for (int i = 1; i < 5; ++i)
    {
        if (f[i] > max)
        {
            max = f[i];
        }
        std::cout << i << ' '
                  << f[i] << ' '
                  << max << '\n';
    }
    std::cout << max << '\n';

    double s = 0.0;
    for (int i = 0; i < 5; ++i)
    {
        s += f[i];
        std::cout << i << ' ' << f[i]
                  << ' ' << s << '\n';
    }
    std::cout << s << '\n';
    return 0;
}
