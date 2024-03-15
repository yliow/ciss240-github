#include <iostream>

int main()
{
    // int s = 0;
    // int i = 1;
    // while (i <= 10)
    // {
    //     s += i;
    //     std::cout << "i:" << i << " s:" << s << '\n';

    //     // next iter....
    //     ++i;
    // }
    // std::cout << "i:" << i << " s:" << s << '\n';

    // int i = 0;
    // std::cout << "gimme a num ... ";
    // std::cin >> i;
    // while (i != 42)
    // {
    //     std::cout << "junk ...\n";

    //     // for next iteration
    //     std::cout << "gimme a num ... ";
    //     std::cin >> i;
    // }

    // int sum = 0;
    // int i = 0;
    // std::cout << "gimme a number ... ";
    // std::cin >> i;
    // while (i != 42)
    // {
    //     sum += i;
    //     std::cout << "sum: " << sum << '\n';

    //     // for next iteration
    //     std::cout << "gimme a number ... ";
    //     std::cin >> i;
    // }
    // std::cout << "the final sum: " << sum << '\n';

    // int i;
    // int s;
    // while (true)
    // {
    //     // input
    //     std::cout << "gimme a number ... ";
    //     std::cin >> i;
    //     if (i == 42)
    //     {
    //         break;
    //     }
        
    //     // process
    //     s += i;
    //     std::cout << "s: " << s << '\n';
    // }
    // std::cout << "final s: " << s << '\n';

    const int SENTINEL = -99999;
    int x;
    int max;
    
    std::cin >> x;
    max = x;
    std::cout << "max:" << max << '\n';

    while (1)
    {
        // input
        std::cin >> x;
        if (x == SENTINEL)
        {
            break;
        }
        
        // process
        if (x > max)
        {
            max = x;
        }
        std::cout << "max:" << max << '\n';
    }

    std::cout << "final max:" << max << '\n';

    return 0;
}
