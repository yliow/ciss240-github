#include <iostream>
#include <cmath>

int digit(int n, int i)
{
    return (n / int(pow(10, i))) % 10;
}

void print_array(int x[5])
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::cout << digit(15327, 3) << '\n';
    std::cout << digit(7805362, 5) << '\n';
    std::cout << digit(7805362, 0) << '\n';
    std::cout << digit(0, 0) << '\n';
    std::cout << digit(1572, 6) << '\n';

    int x[] = {2, 3, 5, 7, 11};
    print_array(x);
    
    return 0;
}
