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

    // Sierpinsky triangle - fractal

    // const int N = 500;
    // int ca[2 * N + 1] = {0};
    // int t[2 * N + 1];

    // int n = 40;
    // // work with 2 * n + 1 values in ca,
    // // i.e.,, work on ca[0], ..., ca[2 * n]
    // ca[n] = 1;
    // // print ca[0..2*n]
    // for (int i = 0; i < 2 * n + 1; ++i)
    // {
    //     std::cout << (ca[i] == 1 ? 'X' : ' ');
    // }
    // std::cout << '\n';

    // for (int epoch = 0; epoch <= n; ++epoch)
    // {      
    //     // compute next generation and put values into t
    //     t[0] = ca[0];
    //     t[2 * n] = ca[2 * n];

    //     for (int i = 1; i < 2 * n; ++i)
    //     {
    //         int a = ca[i - 1];
    //         int b = ca[i];
    //         int c = ca[i + 1];
    //         int num = a * 2 * 2 + b * 2 + c;
    //         switch (num)
    //         {
    //             case 0: t[i] = 0; break;
    //             case 1: t[i] = 1; break;
    //             case 2: t[i] = 0; break;
    //             case 3: t[i] = 1; break;
    //             case 4: t[i] = 1; break;
    //             case 5: t[i] = 0; break;
    //             case 6: t[i] = 1; break;
    //             case 7: t[i] = 0; break;
    //         }
    //     }

    //     // copy values from t back to ca
    //     for (int i = 0; i < 2 * n + 1; ++i)
    //     {
    //         ca[i] = t[i];
    //     }
    
    //     // print ca[0..2*n]
    //     for (int i = 0; i < 2 * n + 1; ++i)
    //     {
    //         std::cout << (ca[i] == 1 ? 'X' : ' ');
    //     }
    //     std::cout << '\n';
    
    // } // end for epoch


    // std::cout << 'A' << std::endl;
    // char c = 'A';
    // std::cout << c << std::endl;
    // std::cin >> c;
    // std::cout << c << std::endl;

    // std::cout << int('A') << '\n';
    // std::cout << char(65) << '\n';

    // for (char c = 'A'; c <= 'Z'; ++c)
    // {
    //     std::cout << char(i);
    // }
    // std::cout << '\n';

    char c = '5';
    int i = c - '0';
    std::cout << i << ' ' << i * 10 << '\n';
    
    return 0;
}
