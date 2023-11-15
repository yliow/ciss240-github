#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(0);
    const int n = 10;
    int x[n];

    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % n;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ' ;
    }
    std::cout << '\n';

    int target = rand() % n;
    // std::cout << target << '\n';
    
    // linear search
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        if (x[i] == target)
        {
            index = i;
            break;
        }
    }

    // bubblesort
    std::cout << "bubblesort ...\n";
    for (int i = n - 2; i >= 0; --i))
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = x[j];
            }
            for (int i = 0; i < n; ++i)
            {
                std::cout << x[i] << ' ' ;
            }
            std::cout << '\n';
        }
    }
    return 0;
}
