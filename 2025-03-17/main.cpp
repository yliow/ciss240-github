#include <iostream>
#include <cstdlib>

int main()
{
    // int n;
    // std::cin >> n;

    // for (int i = 1; i <= n - 1; ++i)
    // {
    //     std::cout << ' ';
    // }
    // std::cout << '*';
    // std::cout << '\n';

    // int sum = 0;
    // int i = 1;
    // while (i <= 10)
    // {
    //     sum += i;
    //     std::cout << "i:" << i << " sum:" << sum << '\n';
    //     i += 1;
    // }

    // int i = 0;
    // std::cin >> i;
    // while (i != 42)
    // {
    //     std::cout << "so 42 is not ur fav number\n";
    //     // ---------------------
        
    //     std::cin >> i;
    //     // while (i == 42)
    //     // {
    //     //     std::cout << "good job\n";
    //     // }
    // }

    // die rolls until 6
    int die;
    die = rand() % 6 + 1;
    while (die != 6)
    {
        std::cout << die << '\n';
        // -------
        die = rand() % 6 + 1;
    }
    std::cout << 6 << '\n';
    
    return 0;
}
