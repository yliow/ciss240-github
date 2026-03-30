#include <iostream>
#include <cstring>

int mystrlen(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        ++len;
    }
    return len;
}

void uppercase(char x[])
{
    for (int i = 0; i < mystrlen(x); ++i)
    {
        if ('a' <= x[i] && x[i] <= 'z')
        {
            x[i] = (x[i] - 'a') + 'A';
        }
    }
}

int main()
{
    // //std::cout << '\0' << std::endl;
    // char spam[] = {'a', 'b', 'c', '\0', 'd', 'e'};
    // std::cout << spam << '\n';
    // std::cout << spam[4] << ' ' << spam[5] << '\n';

    // int x[3] = {1, 2, 3};
    // std::cout << x << '\n';

    // //std::cout << {'a', 'b', 'c'} << std::endl; // "abc"

    // char foo[] = "abc"     "def";
    // std::cout << foo << '\n';

    std::cout << strlen("abc") << '\n';
    std::cout << strlen("a\0c") << '\n';
    std::cout << strlen("") << '\n';


    char x[1024] = "hello world";  // {'h', 'e', 'l', 'l', 'o', '\0'}
    // compute the length ( = 5)

    // john    timothy doe ----> Timothy Doe
    
    std::cout << "final len:" << mystrlen(x) << '\n';

    char y[3] = {'a', 'b', 'c'};
    std::cout << y << '\n';
    
    //uppercase(x);
    std::cout << x << '\n';
    return 0;
}
