#include <iostream>

int main()
{
    const double PI = 3.14159;
    std::cout << PI << '\n';

    // WRONG
    // const int i = 42;
    // int i;
    // std::cout << i << '\n';
    
    // const int i;
    // i = 42;

    const int i = 3.14;
    
    return 0;
}
