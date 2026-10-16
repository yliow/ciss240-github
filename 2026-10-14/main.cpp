#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    switch (x)
    {
        case 1:
            std::cout << "yo\n";
            //break;
        case 2:
            std::cout << "right ...\n";
            //break;
        case 3:
            std::cout << "oh?\n";
            break;
        default:
            std::cout << "huh?\n";
    }
    
    return 0;
}
