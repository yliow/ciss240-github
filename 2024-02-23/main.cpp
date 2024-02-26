#include <iostream>

int main()
{
    // int x = 5;
    // int r = (x < 5 ? 42 : 0);
    // std::cout << r << '\n';

    // if (x < 5)
    // {
    //     r = 42;
    // }
    // else
    // {
    //     r = 0;
    // }
    // std::cout << r << '\n';

    int x;
    std::cin >> x;

    switch (x)
    {
        case 1:
            std::cout << "yo" << '\n';
            break;

        case 2:
            std::cout << "right ...\n";
            break;
            
        case 3:
            std::cout << "oh?\n";
            break;
          
        default:
            std::cout << "huh?\n";
            break;
    }
    
    return 0;
}
