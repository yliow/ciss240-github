#include <iostream>

int main()
{
    int a[3];
    a[0] = 4;
    a[1] = 2;
    a[2] = 42;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << a[i] << '\n';
    }
    return 0;
}
