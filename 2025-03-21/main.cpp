#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // int s = 0;

    // int input;
    // std::cin >> input;
    // while (input != -1)
    // {
    //     s += input;
    //     std::cout << input << ' ' << s << '\n';
    //     // ------------------
    //     std::cin >> input;
    // }
    // std::cout << "final s:" << s << '\n';

    /*
    int s = 0;
    int input;
    while (1)
    {
        std::cin >> input;
        if (input == -1)
        {
            break;
        }
        
        s += input;
        std::cout << input << ' ' << s << '\n';
    }
    */

    // max over unknown number of terms (-99999 as sentinel)
/*
    int max;
    int input;
    std::cin >> max;
    //max = input;
    std::cout << max << ' ' << max << '\n';

    while (1)
    {
        // input phase
        std::cin >> input;
        if (input == -99999)
        {
            break;
        }

        // compute
        if (input > max)
        {
            max = input;
        }
        std::cout << input << ' ' << max << '\n';
    }
    std::cout << "final max:" << max << '\n';
*/

    // point of sales system
    /*
    const double TAX = 0.2;
    double total = 0.0;
    double price;
    int num = 0;

    while (1)
    {
        std::cout << "units: ";
        std::cin >> num;
        if (num == 0)
        {
            break;
        }
        if (num < 0)
        {
            std::cout << "units cannot be negative\n";
            continue;
        }

        std::cout << "unit price: ";
        std::cin >> price;

        double cost = num * price * (1 + TAX);
        std::cout << "please pay " << cost << '\n';

        total += cost;
        std::cout << "total revenue: " << total << '\n';
    }
    std::cout << "final total revenue: " << total << '\n';
    */


    // s = 1/1^2 + 1/2^2 + ...
    double s = 0.0;
    double t = 0.0;
    double i = 1;
    double error = 0.00000000000001;
    double n = 1.0;
    while (1)
    {
        // compute s = 1/1^2 + ... + 1/n^2
        s += 1.0 / (n * n);

        // compute t = 1/1^2 + ... + 1/(n + 1)^2
        t = s + 1.0 / ((n + 1) * (n + 1));
        
        // compute the diff and break if diff is small
        if (fabs(s - t) < error)
        {
            break;
        }

        std::cout << i << ' '
                  << std::fixed << std::setprecision(10) << s
                  << ' '
                  << std::fixed << std::setprecision(10) << t
                  << '\n';

        ++n;
    }
    return 0;
}
