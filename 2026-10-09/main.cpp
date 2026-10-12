#include <iostream>
#include <cstdlib>

int main()
{
    srand(0);

    // for (int i = 0; i < 20 ; i = i + 1)
    // {
    //     std::cout << i << ". " << double(rand()) / RAND_MAX * 1.7 + 1.5 << '\n';
    // }

    // for (int i = 0; i < 20; i = i + 1)
    // {
    //     std::cout << i << ". " << double(rand()) / RAND_MAX * 4.3 + 2.5
    //               <<'\n';
    // }
    
    for (int i = 0; i < 20; i = i + 1)
    {
        std::cout << i << ". " << double(rand()) / RAND_MAX * 3.0 - 1.5
                  << '\n';
    }

    return 0;
}
