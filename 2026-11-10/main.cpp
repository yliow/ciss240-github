#include <iostream>

int main()
{
    // int i = 0;
    // std::cout << "gimme a number ... ";
    // std::cin >> i;
    // while (i != 42)
    // {
    //     std::cout << "so 42 is not ur fav num?\n";

    //     // ---------------------------------------

    //     std::cout << "gimme a number ... ";
    //     std::cin >> i;
    // }

    // sum of terms but provided by user
    // use -9999 to end computation
    int s = 0;
    int i;

    // input
    std::cin >> i;
    
    while (i != -9999)
    {
        // compute sum
        s += i;
        std::cout << "partial sum: " << s << '\n';
                                             
        //-----------------------
       
        // input
        std::cin >> i;
    }

    std::cout << "final sum: " << s << '\n';
    
    return 0;
}

