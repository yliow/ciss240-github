#include <iostream>

int main()
{
    /*
    const int N = 11;
    char x[N] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};

    char target;
    std::cin >> target;

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (x[i] == target)
        {
            ++count;
        }
        std::cout << i << ' ' << x[i] << ' ' << count << '\n';
    }
    std::cout << "final count:" << count << '\n';
    */

    const int N = 8;
    int x[N] = {5, 3, 1, 0, 2, 4, 9, 8};

    int t;
    for (int i = N - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }


    
    return 0;
}
