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
    int x[N] = {8, 5, 3, 9, 0, 2, 17, 15};

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

            // print
            // for (int k = 0; k < N; ++k)
            // {
            //     std::cout << x[k] << ' ';
            // }
            // std::cout << '\n';
        }
    }

    // print
    for (int k = 0; k < N; ++k)
    {
        std::cout << x[k] << ' ';
    }
    std::cout << '\n';

    // binary search
    int target;
    std::cin >> target;

    int lower = 0;
    int upper = N - 1;
    int index = -1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        std::cout << lower << ' ' << mid << ' ' << upper << '\n';

        if (x[mid] == target)
        {
            index = mid;
            break;
        }
        else if (x[mid] > target)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    std::cout << "index:" << index << '\n';
    return 0;
}
