#include <iostream>

int main()
{
    int i = 1;
    i++;
    std::cout << i << '\n';

    i = 1;
    ++i;
    std::cout << i << '\n';

    i = 1;
    --i;
    std::cout << i << '\n';

    i = 1;
    i--;
    std::cout << i << '\n';

    i = 5;
    int j = (++i);
    std::cout << i << ' ' << j << '\n';
    i = 5;
    int k = (i++);
    std::cout << i << ' ' << k << '\n';
    return 0;
}
