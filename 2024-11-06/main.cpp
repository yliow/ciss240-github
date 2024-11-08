#include <iostream>

int main()
{
    // int i = 0;
    // std::cout << "gimme a number ...";
    // std::cin >> i;
    // while (i != 42)
    // {
    //     std::cout << "so 42 is not ur fav #?\n";
        
    //     std::cout << "gimme a number ...";
    //     std::cin >> i; 
    // }

    /*
    int sum = 0;
    int i;

    std::cout << "gimme a number ...";
    std::cin >> i;
    while (i != 42)
    {
        sum += i;
        std::cout << "sum: " << sum << '\n';

        std::cout << "gimme a number ...";
        std::cin >> i;
    }
    std::cout << "final sum:" << sum << '\n';
    */

    /*
    int sum = 0;
    int i;

    while (1)
    {
        std::cout << "gimme a num ... ";
        std::cin >> i;
        if (i == 42) break;
        
        sum += i;
        std::cout << "sum: " << sum << '\n';
    }
    std::cout << "total sum:" << sum << '\n';
    */

    int i;
    int max;

    std::cin >> i;
    max = i;
    
    std::cin >> i;
    while (i != 42)
    {
        if (max < i)
        {
            max = i;
        }
    
        std::cin >> i;
    }

    return 0;
}
