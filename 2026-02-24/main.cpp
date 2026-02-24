#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    // for (int i = 0; i < 10; ++i)
    // {
    //     so someting base on i
    // }
    
    // int s = 0;
    // int i = 1;
    // while (i <= 10)
    // {
    //     s += i;
    //     std::cout << i << ' ' << s << '\n';

    //     ++i;
    // }
    // std::cout << i << ' ' << s << '\n';

    
    // int i = 0;
    // // NOTE: this is input ...
    // std::cout << "gimme a number ... ";
    // std::cin >> i;
    // while (i != 42) // 42 is a sentinel value
    // {
    //     std::cout << "so 42 is not ur fav?\n";

    //     // NOTE: this is input ... (same)
    //     std::cout << "gimme a number ... ";
    //     std::cin >> i;
    // }

    // // loop is controlled by a sentinel value

    // roll die until a 6
    // why while-loop? because you don't know
    // how long the loop will run ... not a
    // for-loop
    // int die = rand() % 6 + 1;
    // while (die != 6)
    // {
    //     // process the input
    //     std::cout << die << ' ';
        
    //     //-----------------
    //     // for the next iteration
    //     die = rand() % 6 + 1;
    // }
    // std::cout << die << '\n';
    
    // roll die until 3 consecutive 6s
    // int c = 0; // counter for *consec* 6s
    // int die;
    // while (c < 3)
    // {
    //     die = rand() % 6 + 1;
    //     std::cout << die << ' ';
    //     if (die == 6)
    //     {
    //         ++c;
    //     }
    //     else
    //     {
    //         c = 0;
    //     }
    // }
    // std::cout << '\n';

    // int mystery = rand() % 10 + 1;
    // while ()
    // {
    // }

    int x = 0;
    std::cin >> x;
    int max = x;

    while (x != -99999) // -99999 = sen
    {
        // process
        if (x > max)
        {
            m = x;
        }
        std::cout << x << ' ' << m << '\n';
                                      
        // input (for next iteration)
        std::cin >> x;
    }
    std::cout << "final:" << m << '\n';
    
    return 0;
}
