#include <iostream>

int main()
{
    const double TAX = 0.05;
    double unit_price;
    double num_units;
    double total;

    /*
    std::cout << "enter unit price and num units: ";
    std::cin >> unit_price >> num_units;
    // suppose unit_price = -1 means sentinel, i.e., stop
    while (unit_price != -1)
    {
        total = num_units * unit_price;
        total = total * (1 + TAX);
        std::cout << "please pay " << total << '\n';

        std::cout << "enter unit price and num units: ";
        std::cin >> unit_price >> num_units;
    }
    std::cout << "POS system ended ...\n";
    */

    while (1)
    {
        // get input
        std::cout << "enter unit price (-1 to stop) ";
        std::cin >> unit_price;
        if (unit_price == -1)
        {
            break;
        }
        else if (unit_price < 0)
        {
            std::cout << "unit price must be > 0\n";
            continue;
        }

        std::cout << "enter num units: ";
        std::cin >> num_units;
        if (num_units < 0)
        {
            std::cout << "number of units must be > 0\n";
            continue;
        }
             
        // process
        total = num_units * unit_price;
        total = total * (1 + TAX);
        std::cout << "please pay " << total << '\n';
    }
    std::cout << "POS system ended ...\n";

    return 0;
}
