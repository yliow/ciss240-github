#include <iostream>
#include <cstdlib>
#include <ctime>

/*
             living room 0
            / ^            ^ \
          n/ /e            n\ \ w
          v /        w       \ v
      library 1 ----------> bedroom 2
                <----------
                     s
*/

int main()
{
    srand((unsigned int) time(NULL));
    const int LIVING_ROOM = 0;
    const int LIBRARY = 1;
    const int BEDROOM = 2;
    const int n = 3; // number of rooms
    char input;

    int player_pos = rand() % n;

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "time: " << i << '\n';
        if (player_pos == LIVING_ROOM)
        {
            std::cout << "you are in the living room\n";
            std::cout << "options: n, w\n";
            std::cin >> input;
            if (input == 'n')
            {
                player_pos = LIBRARY;
            }
            else if (input == 'w')
            {
                player_pos = BEDROOM;
            }
            else
            {
                std::cout << "wrong input!!! you idiot!!!\n";
            }
        }
        else if (player_pos == LIBRARY)
        {
            std::cout << "you are in the library\n";
            std::cout << "options: e, w\n";
            std::cin >> input;
            if (input == 'e')
            {
                player_pos = LIVING_ROOM;
            }
            else if (input == 'w')
            {
                player_pos = BEDROOM;
            }
            else
            {
                std::cout << "wrong input!!! you idiot!!!\n";            
            }
        }
        else
        {
            std::cout << "you are in the bedroom\n";
            std::cout << "options: n, s\n";
            std::cin >> input;
            if (input == 'n')
            {
                player_pos = LIVING_ROOM;
            }
            else if (input == 's')
            {
                player_pos = LIBRARY;
            }
            else
            {
                std::cout << "wrong input!!! you idiot!!!\n";
            }
        }
    }


    return 0;
}
