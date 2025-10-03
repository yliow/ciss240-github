#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //int s;
    //std::cin >> s;
    //unsigned int s = (unsigned int) time(NULL);
    //std::cout << s << '\n';
    srand((unsigned int) time(NULL));

    // for (int i = 0; i < 10; ++i)
    // {
    //     int die_roll = rand() % 6 + 1;
    //     std::cout << i << ':' << die_roll << '\n';
    // }

    // for (int i = 0; i < 30; ++i)
    // {
    //     int x = rand() % 10 + 90;
    //     std::cout << x << '\n';
    // }

    // for (int i = 0; i < 20; ++i)
    // {
    //     int y = rand() % 6 - 10;
    //     std::cout << y << ' ';
    // }
    // std::cout << '\n';
    
    for (int i = 0; i < 20; ++i)
    {
        int z = rand() % 15 - 11;
        std::cout << z << ' ';
    }
    std::cout << '\n';
    

    // std::cout << "What is the product of 97 and 94? ";
    // int x;
    // std::cin >> x;

    // if (x == 9118)
    // {
    //     std::cout << "You smart dawg!\n";
    // }
    // else
    // {
    //     std::cout << "Incorrect!\n";
    // }
    
    return 0;
}
