#include <iostream>

int main()
{
    /* Bubblesort for 2 vars
    int x0, x1;
    std::cin >> x0 >> x1;
    int t;
    if (x0 > x1) 
    {
        t = x0;
        x0 = x1;
        x1 = t;
    }
    std::cout << x0 << ' ' << x1 << '\n';
    */

    /* bubblesort on 3 vars 
    int x0, x1, x2;
    std::cin >> x0 >> x1 >> x2;

    int t;
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    
    if (x1 > x2)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << '\n';
    */

    // bubblesort on 4 vars
    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;
    int t;
    // Pass 1
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x1 > x2)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x2 > x3)
    {
        t = x2; x2 = x3; x3 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // Pass 2
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    if (x1 > x2)
    {
        t = x1; x1 = x2; x2 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // Pass 3
    if (x0 > x1)
    {
        t = x0; x0 = x1; x1 = t;
    }
    std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    
    return 0;
}
