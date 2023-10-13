// Lots of repetition code.
// To simplify, you'll need functions, arrays, etc.
// But you can do a lot before that. 
    
#include <iostream>
#include <cstdlib>

int main()
{
    const int DINING_HALL = 0;
    const int BEDROOM = 1;
    const int ARMORY = 2;
    const int LIBRARY = 3;
    const int NUM_STATES = 4;

    int seed;
    std::cout << "seed: ";
    std::cin >> seed;
    srand(seed);
    
    int steps;
    
    int pos = rand() % NUM_STATES;

    int knife_pos = rand() % NUM_STATES;
    bool knife_pickedup = false;
    
    char option;
    std::cout << "steps: ";
    std::cin >> steps;

    for (int i = 0; i < steps; ++i)
    {
        switch (pos)
        {
            case DINING_HALL:
                std::cout << "you are now in the dining hall\n";
                if (knife_pickedup)
                {
                    std::cout << "you have a knife\n";
                }
                else if (knife_pos == DINING_HALL)
                {
                    std::cout << "there's a knife\n";
                }
                std::cin >> option;            
                if (option == 'S')
                {
                    pos = BEDROOM;
                }
                else if (option == 'N')
                {
                    pos = ARMORY;
                }
                break;
                
            case BEDROOM:
                std::cout << "you are now in the bedroom\n";
                if (knife_pickedup)
                {
                    std::cout << "you have a knife\n";
                }
                else if (knife_pos == BEDROOM)
                {
                    std::cout << "there's a knife\n";
                }
                std::cin >> option;
                if (option == 'N') pos = DINING_HALL;
                else if (option == 'S') pos = LIBRARY;
                break;
                
            case ARMORY:
                std::cout << "you are now in the armory\n";
                if (knife_pickedup)
                {
                    std::cout << "you have a knife\n";
                }
                else if (knife_pos == ARMORY)
                {
                    std::cout << "there's a knife\n";
                }
                std::cin >> option;
                if (option == 'E') pos = DINING_HALL;
                else if (option == 'W') pos = BEDROOM;
                else if (option == 'S') pos = LIBRARY;
                break;
                
            case LIBRARY:
                std::cout << "you are now in the library\n";
                if (knife_pickedup)
                {
                    std::cout << "you have a knife\n";
                }
                else if (knife_pos == LIBRARY)
                {
                    std::cout << "there's a knife\n";
                }
                std::cin >> option;
                if (option == 'S') pos = DINING_HALL;
                else if (option == 'N') pos = BEDROOM;
                break;
        }
    } // for
    std::cout << "pos:" << pos << '\n';

    return 0;
}
