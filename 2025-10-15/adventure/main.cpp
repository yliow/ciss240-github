#include <iostream>

int main()
{
    const int BEDROOM = 0;
    const int LIBRARY = 1;
    const int DINING_ROOM = 2;
    
    int q = 2; // state of room
    char c;

    switch (q)
    {
        case BEDROOM:
        {
            std::cout << "you are in the bedroom\n";
            std::cout << "n/s? ";    
            std::cin >> c;
            if (c == 'n')
            {
                q = LIBRARY;
            }
            else if (c == 's')
            {
                q = DINING_ROOM;
            }
            break;
        }
        case LIBRARY:
        {
            std::cout << "you are in the library\n";
            std::cout << "s/w? ";    
            std::cin >> c;
            if (c == 's')
            {
                q = BEDROOM;
            }
            else if (c == 'w')
            {
                q = DINING_ROOM;
            }
            break;
        }
        case DINING_ROOM:
        {
            std::cout << "you are in the dining room\n";
            std::cout << "e? ";    
            std::cin >> c;
            if (c == 'e')
            {
                q = BEDROOM;
            }
            break;
        }
    }
    
    return 0;
}
