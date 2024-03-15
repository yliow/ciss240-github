#include <iostream>

int main()
{
    const double TAX = 0.2;
    double total = 0.0;
    double price = 0.0;
    int num = 0;

    while (1)
    {
        std::cout << "units: ";
        std::cin >> num;

        std::cout << "unit price: ";
        std::cin >> price;

        double cost = num * price * (1 + TAX);
        std::cout << "please pay " << cost << '\n';
    }
    
    return 0;
}
