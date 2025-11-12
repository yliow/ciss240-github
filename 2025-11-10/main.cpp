#include <iostream>

int main()
{
    //int i;

    /*
    // input phase
    std::cout << "gimme a number ...";
    std::cin >> i;

    while (i != 42)
    {
        // current iteration ...
        // compute
        std::cout << "so 42 is not your favc number?\n";

        // --------------------------------------------

        // next iteration ...
        // input phase
        std::cout << "gimme a number ...";
        std::cin >> i;
    }
    */

    /*
    int s = 0;

    // input
    std::cin >> i;
    while (i != 42) // i.e. if i is 42, get out
    {
        // compute for current iteration
        s += i;
        std::cout << i << ' ' << s << '\n';
        
        //--------------------
        // for the next iteration
        std::cin >> i;
    }
    std::cout << "final s:" << s << '\n';
    */

    /*
    int p = 1;
    int i;

    std::cin >> i;
    while (i != 0) // choose a sentinel that shld not be used as data 
    {
        // current iteration
        p *= i;
        std::cout << i << ' ' << p << '\n';
        
        //----------------------------
        // for the sake of next iteration
        std::cin >> i;
    }

    std::cout << "product:" << p << '\n';
    */

/*
    // sum of inputs
    int s = 0;
    int i;

    while (1) // 1 -> true
    {
        // input phase
        std::cin >> i;
        if (i == 42)
        {
            break;
        }

        // compute phase
        s += i;
        std::cout << i << ' ' << s << '\n';
    }
    std::cout << s << '\n';
*/

    const double TAX = 0.2;
    double total = 0.0;
    double price;
    int num;

    while (1)
    {
        // input
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

        // process
        double cost = num * price * (1 + TAX);
        std::cout << "please pay " << cost << '\n';
        total += cost;
    }
    std::cout << "total: " << total << '\n';
    
    return 0;
}
