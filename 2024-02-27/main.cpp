#include <iostream>
#include <iomanip>

int main()
{
    // int i = 42;
    // std::cout << i << '\n';
    // i = i + 1;
    // std::cout << i << '\n';

    // i = 42;
    // std::cout << i << '\n';
    // ++i;
    // std::cout << i << '\n';
    
    // i = 42;
    // std::cout << i << '\n';
    // i++;
    // std::cout << i << '\n';
    
    // i = 42;
    // std::cout << i << '\n';
    // i += 1;
    // std::cout << i << '\n';

    // for (int i = 10; i > 3; i -= 2)
    // {
    //     std::cout << i << '\n';
    // }

    // for (int i = 0; i < 1000; ++i)
    // {
    //     std::cout << "entering block\n";
    //     std::cout << "i:" << i << '\n';
    //     std::cout << "exiting this block...\n";
        
    // }

    std::cout << std::setw(10) << "n"
              << std::setw(10) << "n^2" << '\n';
   
    std::cout << std::setw(10) << "---"
              << std::setw(10) << "---" << '\n';
   
    for (int i = 0; i < 10; ++i)
    {
        std::cout << std::setw(10) << i
                  << std::setw(10) << i * i << '\n';
    }
    
    return 0;
}
