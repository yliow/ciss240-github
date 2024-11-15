#include <iostream>
#include <cstdlib>

int main()
{
    int a[3];
    a[0] = 4;
    a[1] = 2;
    a[2] = 42;

    std::cout << a[0] << '\n';
    std::cin >> a[1];
    std::cout << a[1] << '\n';

    int i = 2;
    std::cout << a[i] << '\n';
    std::cout << a[i - 1] << '\n';


    std::cout << "without iteration\n";
    std::cout << a[0] << '\n';
    std::cout << a[1] << '\n';
    std::cout << a[2] << '\n';

    std::cout << "with iteration\n";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << a[i] << '\n';
    }
    
    // create random numbers, put into die
    int die[20];
    for (int i = 0; i < 20; ++i)
    {
        die[i] = rand() % 6 + 1;
    }
    for (int i = 0; i < 20; ++i)
    {
        std::cout << die[i] << ' ';
    }
    std::cout << '\n';

    int s = 0;
    for (int i = 0; i < 20; ++i)
    {
        s += die[i];
        std::cout << i << ' ' << s << '\n';
    }
    std::cout << s / 20.0 << '\n';
    
    return 0;
}
