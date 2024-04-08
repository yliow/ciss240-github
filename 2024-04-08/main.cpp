#include <iostream>
#include <cstring>

int mystrlen(char x[])
{
    int len = 0;
    while (x[len] != '\0')
    {
        ++len;
    }
    //std::cout << len << '\n';
    return len;
}

int main()
{
    // char x[5] = {'a', 'b', 'c', '\0', 'e'};
    // std::cout << x << '\n';

    // for (int i = 0; i < 5; ++i)
    // {
    //     std::cout << i << ": [" << x[i] << "] " << int(x[i]) << '\n';
    // }

    // char y[1024] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // std::cout << y << '\n';

    // char c;
    // std::cin >> c;
    // int i = int(c) - 48;
    // std::cout << i << ' ' << i + 1 << '\n';

    // char s[10] = "478";
    // int score = (int(s[2]) - 48) +  (int(s[1]) - 48) * 10 + (int(s[0]) - 48) * 100;
    // std::cout << score << " " << score + 12 << '\n';
    // std::cout << s + 12 << '\n';

    char a[1024] = {'h', 'e', 'l', 'l', 'o', '\0', 'a', 'b', 'c'};
    std::cout << a << '\n';
    std::cout << strlen(a) << '\n';

    for (int i = 0; i < mystrlen(a); ++i)
    {
        a[i] = 'A' + (a[i] - 'a');
    }
    std::cout << a << '\n';
    std::cout << mystrlen(a) << '\n';
    
    return 0;
}
