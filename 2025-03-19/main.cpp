#include <iostream>

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

    const double TAX = 0.2;
    double total = 0.0;
    double price;
    int num = 0;

    while (1)
    {
        std::cout << "units: ";
        std::cin >> num;

        std::cout << "unit price: ";
        std::cin >> price;

        double cost = num * price * (1 + TAX);
        std::cout << "please pay " << cost << '\n';

        total += cost;
        std::cout << "total revenue: " << total << '\n';
    }
    
    return 0;
}
