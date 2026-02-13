#include <iostream>

int main()
{
    std::cout << "before\n";

    for (int i = 0; i < 10; i = i + 1)
    {
        std::cout << i << '\n';
    }
    
    std::cout << "after\n";
    
    return 0;
}
