#include <iostream>
#include <cmath>

int main()
{
    // int n;
    // std::cin >> n;
    // int addr[1000000]; // max 1000000 houses
    // for (int i = 0; i < n; ++i)
    // {
    //     std::cin >> addr[i];
    // }

    // // brute force search across all houses
    // int min_d;
    // int min_index;
        
    // for (int i = 0; i < n; ++i)
    // {
    //     // calculate dist travelled is party is at
    //     // addr[i]
    //     int d = 0;
    //     for (int j = 0; j <  n; ++j)
    //     {
    //         d += fabs(addr[j] - addr[i]);
    //     }
    //     if (i == 0)
    //     {
    //         min_d = d;
    //         min_index = 0;
    //     }
    //     else
    //     {
    //         if (d < min_d)
    //         {
    //             min_d = d;
    //             min_index = i;
    //         }
    //     }
    // }


    const int N = 500;
    int ca[2 * N + 1] = {0};
    int n = 10;
    // work with 2 * n + 1 values in ca,
    // i.e.,, work on ca[0], ..., ca[2 * n]
    ca[n] = 1;

    int t[2 * N + 1];
    t[0] = ca[0];
    t[2 * n] = ca[2 * n];

    for (int i = 1; i < 2 * n; ++i)
    {
        int a = ca[i - 1];
        int b = ca[i];
        int c = ca[i + 1];
        int num = a * 2 * 2 + b * 2 + c;
        switch (num)
        {
            case 0: t[i] = 0; break;
            case 1: t[i] = 1; break;
            case 2: t[i] = 0; break;
            case 3: t[i] = 1; break;
            case 4: t[i] = 1; break;
            case 5: t[i] = 0; break;
            case 6: t[i] = 1; break;
            case 7: t[i] = 0; break;
        };
    }
    
    return 0;
}
