#include <iostream>

int main()
{
    char s[1024] = {'a', 'b', 'c', '\0', 'd', 'e'}; // "abc";
    std::cout << s << '\n';
    std::cout << s[4] << '\n';
    std::cout << s[5] << '\n';

    return 0;
}
