#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    // int x;
    // std::cin >> x;

    // if (x % 2 == 0)
    // {
    //     std::cout << "that's even\n";
    // }
    // else
    // {
    //     std::cout << "that's odd\n";
    // }

    // coin toss
    // for (int i = 0; i < 10; i = i + 1)
    // {
    //     char cointoss;
    //     if (rand() % 2 == 0)
    //     {
    //         cointoss = 'H';
    //     }
    //     else
    //     {
    //         cointoss = 'T';
    //     }
    //     std::cout << cointoss << '\n';
    // }

    for (int i = 0; i < 20; i = i + 1)
    {
        // random direction
        int dir = rand() % 4;
        char dir1;
        if (dir == 0)
        {
            dir1 = 'N';
        }
        else
        {
            if (dir == 1)
            {
                dir1 = 'E';
            }
            else
            {
                if (dir == 2)
                {
                    dir1 = 'S';
                }
                else
                {
                    dir1 = 'W';
                }
            }
        }
        std::cout << dir1 << '\n';
    } // for i

    
    return 0;
}
