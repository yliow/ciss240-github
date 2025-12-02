#include <iostream>

int main()
{
    // char x[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    // char target;
    // std::cin >> target;

    // bool found = false;
    // for (int i = 0; i < 11; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         found = true;
    //         break;
    //     }
    // }

    // std::cout << (found ? "found" : "not found") << '\n';

    // int index = -1;
    // for (int i = 0; i < 11; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         index = i;
    //         break;
    //     }
    // }
    // std::cout << index << '\n';

    // bubblesort
    
    // const int SIZE = 10;
    // int x[SIZE] = {19, 5, 27, 52, 1, 78, 36, 0, 73, 84};
    // for (int j = SIZE - 2; j >= 0; --j)
    // {
    //     // std::cout << "a pass\n";
    //     for (int i = 0; i <= j; ++i)
    //     {
    //         if (x[i] > x[i + 1])
    //         {
    //             int t = x[i];
    //             x[i] = x[i + 1];
    //             x[i + 1] = t;
    //         }
    //         // for (int i = 0; i < SIZE; ++i)
    //         // {
    //         //     std::cout << x[i] << ' ';
    //         // }
    //         // std::cout << '\n';
    //     }
    // }
    // for (int i = 0; i < SIZE; ++i)
    // {
    //     std::cout << x[i] << ' ';
    // }
    // std::cout << '\n';

    // int target;
    // std::cin >> target;
    // int lower = 0;
    // int upper = SIZE - 1;
    // int index = -1;
    // while (lower <= upper)
    // {
    //     int mid = (lower + upper) / 2;
    //     std::cout << lower << ' ' << mid << ' ' << upper << '\n';
    //     if (x[mid] == target)
    //     {
    //         index = mid;
    //         break;
    //     }
    //     else if (target < x[mid])
    //     {
    //         upper = mid - 1;
    //     }
    //     else
    //     {
    //         lower = mid + 1;
    //     }
    // }
    // std::cout << index << '\n';

    // char x[20] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r',
    //     'l', 'd'};
    // std::cout << x << '\n';
    // char y[20] = "hello\0world";
    // std::cout << y << '\n';
    // std::cout << y[6] << ' ' << y[7] << ' ' << y[8] << '\n';
    // return 0;


    for (int j = 0; j < 1000; ++j)
    {
        std::cout << "hello world";
        for (int i = 0; i < 100; ++i) std::cout << '\b';
    }
    
    return 0;

    
}
