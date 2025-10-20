#include <iostream>

int main()
{
    // int x;
    // std::cin >> x;

    // switch (x)
    // {
    //     case 1:
    //         std::cout << "yo\n";
    //         break;
    //     case 2:
    //         std::cout << "right ...\n";
    //         //break;
    //     case 3:
    //     case 4:
    //     case 5:
    //         std::cout << "oh?\n";
    //         break;
    //         //default:
    //         //std::cout << "huh?\n";
    // }
    // std::cout << "out of switch\n";

    int x, y;
    char op;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    std::cout << "op: ";
    std::cin >> op;

    switch (op)
    {
        case '+':
            std::cout << x << ' ' << op << ' ' << y << " = ";
            std::cout << x + y << '\n';
            break;
        case '-':
            std::cout << x << ' ' << op << ' ' << y << " = ";
            std::cout << x - y << '\n';
            break;
        default:
            std::cout << "no such op!\n";
    }
    
    return 0;
}
