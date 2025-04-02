#include <iostream>
#include <cstdlib>
#include <ctime>

int linsrch(int x[], int target)
{
    for (int i = 0; i < 10; ++i)
    {
        if (x[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand((unsigned int) time(NULL));
    int x[10];

    for (int i = 0; i < 10; ++i)
    {
        x[i] = rand() % 20;
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';

    int m;
    int index;
    
    m = x[0];
    index = 0;
    std::cout << 0 << ' ' << x[0] << ' ' << m << ' ' << index << '\n'; 

    for (int i = 1; i < 10; ++i)
    {
        if (x[i] > m)
        {
            m = x[i];
            index = i;
        }
        std::cout << i << ' ' << x[i] << ' ' << m << ' ' << index << '\n'; 
    }
    std::cout << "final m and index:" << m << ' ' << index << '\n';

    // a slightly difference running max computation ...
    // m = 0;
    // index = -1;

    // for (int i = 0; i < 10; ++i)
    // {
    //     if (i == 0)
    //     {
    //         m = x[0];
    //         index = 0;
    //     }
    //     else
    //     {
    //         if (x[i] > m)
    //         {
    //             m = x[i];
    //             index = i;
    //         }
    //     }
    // }

    // a completely diff running max computation ...
    // m = -1;
    // index = -1;
    // for (int i = 0; i < 10; ++i)
    // {
    //     if (x[i] > m)
    //     {
    //         m = x[i];
    //         index = i;
    //     }
    // }

    std::cout << "linear srch\n";
    int target;
    std::cin >> target;
    index = linsrch(x, target);
    std::cout << "index: " << index << '\n';
        
    return 0;
}
