#include <iostream>

int main()
{
    const int BEDROOM = 0;
    const int LIBRARY = 1;
    const int DINING_ROOM = 2;
    
    int q = 2; // state of room
    char c;
    
    if (q == BEDROOM)
    {
        std::cout << "you are in the bedroom\n";
        std::cout << "n/s/w/e? ";    
        std::cin >> c;
        if (c == 'n')
        {
            q = LIBRARY;
        }
    }
    else // i.e. q is not 0
    {
        // q must be 1 or 2
        if (q == LIBRARY)
        {
            std::cout << "you are in the library\n";
        }
        else // then q must be DINING_ROOM
        {
            std::cout << "you are in the dining room\n";
        }
    }
    
    
    return 0;
}
