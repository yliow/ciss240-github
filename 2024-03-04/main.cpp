#include <iostream>

int main()
{
    int n; // number of values to minimize 
    std::cin >> n;

    int x;
    int min;
    
    std::cin >> x;
    min = x;
    std::cout << x << ' ' << min << '\n';

    for (int i = 0; i < n - 1; ++i)
    {
        std::cin >> x;
        if (x < min)
        {
            min = x;
        }
        std::cout << x << ' ' << min << '\n';
    }
    std::cout << min << '\n';
    
    return 0;
}
