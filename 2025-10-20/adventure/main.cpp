#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    
    const int BEDROOM = 0;
    const int LIBRARY = 1;
    const int DINING_ROOM = 2;
    
    int q = rand() % 3; // 2; // state of room
    int dagger_room = BEDROOM;
    bool dagger_picked_up = false;
    char c;

    for (int t = 0; t < 10; ++t)
    {
        std::cout << "t:" << t << '\n';
        switch (q)
        {
            case BEDROOM:
            {
                std::cout << "you are in the bedroom\n";
                if (dagger_room == BEDROOM)
                {
                    std::cout << "there's a dagger on the floor\n";
                }
                std::cout << "n/s? ";    
                std::cin >> c;
                switch (c)
                {
                    case 'n':
                        q = LIBRARY;
                        break;
                    case 's':
                        q = DINING_ROOM;
                        break;
                    }
                break;
            }
            case LIBRARY:
            {
                std::cout << "you are in the library\n";
                if (dagger_room == LIBRARY)
                {
                    std::cout << "there's a dagger on the floor\n";
                }
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
                if (dagger_room == DINING_ROOM)
                {
                    std::cout << "there's a dagger on the floor\n";
                }
                std::cout << "e? ";    
                std::cin >> c;
                if (c == 'e')
                {
                    q = BEDROOM;
                }
                break;
            }
        }
    } // end for t
    
    return 0;
}
