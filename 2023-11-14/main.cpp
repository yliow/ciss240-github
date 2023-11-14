#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(0);
    const int n = 1000000000;
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
    std::cout << target << " is at index " << index << '\n';
    
    return 0;
}
