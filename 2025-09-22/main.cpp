#include <iostream>

int main()
{
    double pi = 3.14159;
    const double PI = 3.14159;

    std::cout << pi << ' ' << PI << '\n';

    pi = 3.0;
    std::cout << pi << '\n';

    PI = 3;
    
    return 0;
}
