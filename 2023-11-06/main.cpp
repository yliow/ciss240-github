#include <iostream>

int main()
{
    /*
    int s = 0;
    for (int i = 1; i < 5; ++i)
    {
        s += i;
        std::cout << "s:" << s << ' ' << i << '\n';
    }
    std::cout << "final s:" << s << '\n';
    //std::cout << i << '\n';

    s = 0;
    int j = 0;
    while (j < 5)
    {
        s += j;
        std::cout << "s:" << s << ' ' << j << '\n';

        ++j;
    }
    std::cout << "final s:" << s << '\n';
    std::cout << j << '\n';
    */

    // for (int i = 0; i < 100; ++i)
    // {
    //     std::cout << i << '\n';
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     /*
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     std::cout << "bottom of loop\n";
    //     */
    //     if (i != 3)
    //     {
    //         std::cout << "bottom of loop\n";
    //     }
    // }
    // std::cout << "out of loop\n";

    // max if know number of terms
    /*
    int n;
    std::cin >> n;
    int max = -1; // if all user inputs are > 0
    //std::cin >> max;
    for (int i = 0; i < n; ++i)
    {
        int term;
        std::cin >> term;
        if (term > max)
        {
            max = term;
        }
        std::cout << max << ' ' << term << '\n';
    }
    std::cout << "final max:" << max << '\n';
    */

    // number of terms not known
    /*
    int max;
    // sentinel is -9999
    int term;
    std::cin >> term;
    while (term != -9999)
    {
        if (term > max)
        {
            max = term;
        }

        std::cin >> term;
    }
    */

    /*
    int max;
    while (1)
    {
        // input
        int term;
        std::cin >> term;
        if (term == -9999)
        {
            break;
        }

        // compute
        if (term > max)
        {
            max = term;
        }
        }
    */

    double sum = 0;
    while (1)
    {
        double price;
        std::cin >> price;
        // sentinel -1
        if (price == -1)
        {
            break;
        }
        if (price < 0)
        {
            std::cout << "incorrect data entry ... try again\n";
            continue;
        }
        sum += price;
        std::cout << "sum:" << sum << '\n';
    }
    std::cout << "final sum:" << sum << '\n';
    std::cout << "final sum + tax:" << sum * 1.15 << '\n';
    return 0;
}


    
