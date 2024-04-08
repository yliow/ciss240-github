#include <iostream>

int main()
{
    // char x;
    // std::cin >> x;
    // std::cout << "x is [" << x << "]\n"; 
    // std::cout << "ASCII code of x is " << int(x) << '\n';
    // std::cout << char(97) << '\n';

    // std::cout << int('A') << '\n';

    for (int i = 65; i < 65 + 26; ++i)
    {
        std::cout << char(i);
    }
    std::cout << '\n';

    for (char c = 'A'; c <= 'Z'; ++c)
    {
        std::cout << c;
    }
    std::cout << '\n';


    //char s[1024] = "hello world\n";
    char s[1024] = {'h', 'e', 'l', 'l', 'o', ' ',
                    'w', 'o', 'r', 'l', 'd', '\n', '\0', 'a', 'b'};
    std::cout << s;


    
    return 0;
}
