#include <iostream>

int main()
{
    // double x[3] = {1.2, 3.14, 7.32};
    int x[3] = {0}; // = {3.14};

    // WRONG!
    // for (int i = 0; i < 1000000; ++i)
    // {
    //     x[i] = 0.0;
    // }
    
    // for (int i = 0; i < 100000; ++i)
    // {
    //     std::cout << x[i] << ' ';
    // }
    // std::cout << '\n';

    // int i;
    // std::cout << sizeof(i) << '\n';
    // std::cout << sizeof(int) << '\n';
    // std::cout << sizeof(double) << '\n';

    // int y[10];
    
    // for (int i = 0; i < sizeof(x) / sizeof(int); ++i)
    // {
    //     std::cout << y[i] << ' ';
    // }
    // std::cout << '\n';

    double a[] = {1.3, 4.2, 2.5, 5.6, 4.3};
    double max = a[0];
    int max_i = 0;
    std::cout << 0 << ' ' << a[0] << ' ' << max << '\n';
    for (int i = 1; i < 5; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_i = i;
        }
        std::cout << i << ' ' << a[i] << ' ' << max
                  << ' ' << max_i << '\n';
    }
    std::cout << max << ' ' << max_i << '\n';
    
    return 0;
}
