#include <iostream>

int main()
{
    char s[1024] = {'a', 'b', 'c', '\0', 'X', 'Y', 'Z'};
    std::cout << "s: [" << s << "]\n";

    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << ": " << s[i] << ' ' << int(s[i]) << '\n';
    }

    for (char c = 'a'; c <= 'z'; ++c)
    {
        std::cout << c;
    }
    std::cout << '\n';

    char t[1024] = "hello"; // {'h', 'e', 'l', 'l', 'o', '\0'};
    std::cout << t << '\n';

    for (int i = 0; i < 1024; ++i)
    {
        if (t[i] == '\0')
        {
            break;
        }
        if ('a' <= t[i] && t[i] <= 'z')
        {
            t[i] =  t[i] + 'A' - 'a';
        }
    }
    std::cout << "new t:" << t << '\n';
    
    return 0;
}
