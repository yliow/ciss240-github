#include <iostream>

int main()
{
    // int x0, x1, x2, x3, x4;
    // std::cin >> x0 >> x1 >> x2 >> x3 >> x4;

    // int target;
    // std::cin >> target;

    // int count = 0;
    // if (x0 == target)
    // {
    //     count = count + 1;
    // }
    // std::cout << x0 << ' ' << count << '\n';
    
    // if (x1 == target)
    // {
    //     count = count + 1;
    // }
    // std::cout << x1 << ' ' << count << '\n';
    
    // if (x2 == target)
    // {
    //     count = count + 1;
    // }
    // std::cout << x2 << ' ' << count << '\n';

    // if (x3 == target)
    // {
    //     count = count + 1;
    // }
    // std::cout << x3 << ' ' << count << '\n';

    // if (x4 == target)
    // {
    //     count = count + 1;
    // }
    // std::cout << x4 << ' ' << count << '\n';

    // std::cout << " final count: " << count << '\n';

    // int x = 5;
    // std::cout << (x == 5 ? 0 : 1) << '\n';

    // if (x == 5)
    // {
    //     std::cout << 0 << '\n';
    // }
    // else
    // {
    //     std::cout << 1 << '\n';
    // }
    
    int x = 0;
    std::cin >> x;

    switch (x)
    {
        case 1:
            std::cout << "yo\n";
            break;
        case 2:
            std::cout << "right\n";
            break;
        case 3:
            std::cout << "oh?\n";
        default:
            std::cout << "huh?\n";
    }
    std::cout << "out\n";
    
    return 0;
}
