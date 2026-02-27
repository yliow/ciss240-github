#include <iostream>

int numdigits(int n)
{
    int numdigits_ = 0;
    if (n == 0)
    {
        numdigits_ = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            ++numdigits_;
            //std::cout << n << ' ' << numdigits_ << '\n';
        }
    }
    return numdigits_;
}

int main()
{
    // // summation problem
    // int i = 0, sum = 0;

    // while (1)
    // {
    //     // input
    //     std::cout << "gimme a number: ";
    //     std::cin >> i;
    //     if (i == -1) break;
        
    //     // process
    //     sum += i;
    //     std::cout << i << ' ' << sum << '\n';
    // }
    // std::cout << sum << '\n';

    // const double TAX = 0.2;
    // double total = 0.0;
    // double sum_of_totals = 0.0;
    // double price = 0.0;
    // int num = 0;

    // while (1)
    // {
    //     std::cout << "unit: ";
    //     std::cin >> num;
    //     if (num == 0)
    //     {
    //         break;
    //     }
    //     if (num < 0)
    //     {
    //         std::cout << "units cannot be negative\n";
    //         continue;
    //     }

    //     std::cout << "unit price: ";
    //     std::cin >> price;
    //     if (price < 0)
    //     {
    //         std::cout << "price cannot be negative\n";
    //         continue;
    //     }

    //     double cost = num * price * (1 + TAX);
    //     std::cout << "please pay " << cost << '\n';
    //     sum_of_totals += cost;
    //     std::cout << "sum of all totals:" << sum_of_totals << '\n';
    // }

    // std::cout << "time to go home. till is below.\n";
    // std::cout << "sum of all totals:" << sum_of_totals << '\n';


    // nmumber of digits
    int n;
    std::cin >> n;
    std::cout << numdigits(n) << '\n';
    return 0;
}
