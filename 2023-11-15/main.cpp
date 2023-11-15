#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(4);
    const int n = 1000;
    int x[n];

    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % n;
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << x[i] << ' ' ;
    // }
    // std::cout << '\n';

    // bubblesort
    std::cout << "bubblesort ...\n";
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
                {
                    int t = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = t;
                }
            // for (int i = 0; i < n; ++i)
            // {
            //     std::cout << x[i] << ' ' ;
            // }
            // std::cout << '\n';
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << x[i] << ' ' ;
    // }
    // std::cout << '\n';

    for (int test = 0; test < 20; ++test)
    {
        int target = rand() % n;
        // std::cout << target << '\n';
        
        // linear search
        // int index = -1;
        // for (int i = 0; i < n; ++i)
        // {
        //     if (x[i] == target)
        //     {
        //         index = i;
        //         break;
        //     }
        // }

        //binary search
        int index = -1;  
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            //std::cout << left << ' ' << mid << ' ' << right << '\n';
            if (x[mid] == target)
            {
                index = mid;
                break;
            }
            else if (target < x[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return 0;
}
