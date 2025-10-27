#include <iostream>

int main()
{
    // int i;
    // for (i = 0; i < 10; ++i)
    // {
    //     std::cout << i << '\n';
    // }
    // std::cout << "after for loop: " << i << '\n';

    // int s = 0;
    // for (int i = 1; i < 1000000; ++i)
    // {
    //     s = s + i;
    //     std::cout << i << ' ' << s << '\n';
    // }
    // std::cout << "final result:" << s << '\n';

    int s = 0;
    for (int i = 1; i < 6; ++i)
    {
        int term = i * i;
        s += term;
        //std::cout << i << ' ' << i * i << ' ' << s << '\n'; 
    }
    std::cout << "final:" << s << '\n';
    
    return 0;
}
