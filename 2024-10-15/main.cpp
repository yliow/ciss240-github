#include <iostream>

int main()
{
    // int num_hello_worlds;
    // std::cin >> num_hello_worlds;
    
    // for (int i = 0; i < num_hello_worlds; ++i)
    // {
    //     std::cout << "hello world\n";
    // }

    std::cout << "n" << ' ' << "n^2" << '\n';
    std::cout << "---" << ' ' << "---" << '\n';

    for (int i = 0; i < 20; ++i)
    {
        std::cout << i << ' ' << i * i << '\n';
    }
    
    return 0;
}
