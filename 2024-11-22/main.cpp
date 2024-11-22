#include <iostream>

int main()
{
    /*
    std::cout << 42 << '\n';
    std::cout << 42 + 1 << '\n';
    int x = 42;
    x = x + 1;

    std::cout << 'A' << '\n';
    char y = 'A';
    std::cout << y << '\n';
    std::cin >> y;
    std::cout << "y:" << y << ' ' << int(y) << '\n';
    std::cout << y + 1 << '\n';
    std::cout << char(65) << '\n';

    // print ABC....Z
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        std::cout << c;
    }
    std::cout << '\n';

    char c;
    std::cin >> c;
    int i = c - '0';
    std::cout << c << ' ' << i << '\n';
    */

    std::cout << "hello world\n";
    char s[100] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0', 'a', 'b', 'c'};
    std::cout << s << '\n';
    for (int i = 0; i < 20; ++i)
    {
        std::cout << i << ' ' << s[i] << ' ' << int(s[i]) << '\n';
    }

    int x[100] = {1, 5, 2};
    std::cout << x << '\n';

    char a[1024];
    std::cin >> a;

    // capitalize the string
    int i = 0;
    while (a[i] != '\0')
    {
        if ('a' <= a[i] && a[i] <= 'z')
        {
            a[i] = a[i] - 'a' + 'A';
        }
    }
    std::cout << a << '\n';
    
    return 0;
}
