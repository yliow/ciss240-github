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
        std::cout << "enter unit price and num units: ";
        std::cin >> unit_price >> num_units;

        // process
        total = num_units * unit_price;
        total = total * (1 + TAX);
        std::cout << "please pay " << total << '\n';
    }
    std::cout << "POS system ended ...\n";

    return 0;
}
