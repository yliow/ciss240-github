#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));

    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     int r = rand() % 16 - 5;
    //     std::cout << r << '\n';
    // }


    // std::cout << "0.0 -- 1.0\n";
    // for (int i = 0; i < 5; i = i + 1)
    // {
    //     std::cout << double(rand()) / RAND_MAX << '\n';
    // }    
    // std::cout << "1.5 -- 4.7\n";
    // for (int i = 0; i < 10; i = i + 1)
    // {
    //     std::cout << double(rand()) / RAND_MAX * 3.2 + 1.5 << '\n';
    // }
    std::cout << "-3.5 -- -1.2\n";
    for (int i = 0; i < 10; i = i + 1)
    {
        std::cout << double(rand()) / RAND_MAX * 2.3 - 3.5 << '\n';
    }
    
    return 0;
}
