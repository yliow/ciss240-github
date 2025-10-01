#include <iostream>

int main()
{
    // bool x = false;

    // std::cout << x << ' ' << (x == true) << '\n';
    // std::cout << (!x) << ' ' << (x == false) << '\n';

    // std::cout << "what's your favorite number? ";
    // int fav_num = 0;
    // std::cin >> fav_num;

    // if (fav_num != 42)
    // {
    //     std::cout << "you don't like 42?!?\n";
    // }

    int x;
    std::cin >> x;
    if (x % 2 == 0)
    {
        std::cout << "That's even. Am I smart?\n";
    }
    return 0;
}
