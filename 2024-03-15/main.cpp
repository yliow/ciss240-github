#include <iostream>

int main()
{
    // POS system
    // const double TAX = 0.2;
    // double total = 0.0;
    // double price = 0.0;
    // int num = 0;

    // while (1)
    // {
    //     std::cout << "units: ";
    //     std::cin >> num;
    //     if (num == 0)
    //     {
    //         break;
    //     }
    //     else if (num < 0)
    //     {
    //         std::cout << "units cannot be negative\n";
    //         continue;
    //     }

    //     std::cout << "unit price: ";
    //     std::cin >> price;
        
    //     double cost = num * price * (1 + TAX);
    //     std::cout << "please pay " << cost << '\n';
    // }

    // digit counting
    int n;
    std::cin >> n;
    int numdigits = 0;

    while (n > 0)
    {
        n /= 10;
        ++numdigits;
        std::cout << n << ' ' << numdigits << '\n';
    }
    std::cout << "final numdigits: " << numdigits << '\n';
    
    return 0;
}
