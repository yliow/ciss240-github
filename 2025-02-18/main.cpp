#include <iostream>

/*
  finite state automata (state diagram/machine)
  
                     library
                 N ^ /      \ ^W
                  / /        \ \
                 / vE        Wv \ <<<<
           kitchen              study
                  \ ^W       S^  /
                   \ \       /  /
                  E v \     /  vN
                     bedroom 
  
 */

int main()
{
    const int KITCHEN = 0;
    const int LIBRARY = 1;
    const int STUDY = 2;
    const int BEDROOM = 3;
        
    int q = KITCHEN; // player starts in the kitchen.
    char input;

    for (int i = 0; i < 4; i = i + 1)
    {
        std::cout << "i: " << i << '\n';
        switch (q)
        {
            case KITCHEN:
            {
                std::cout << "You are in the kitchen.\n"
                          << "options: n, e\n";
                std::cin >> input;
                switch (input)
                {
                    case 'n':
                    {
                        q = LIBRARY;
                        break;
                    }
                    case 'e':
                    {
                        q = BEDROOM;
                        break;
                    }
                    default:
                    {
                        std::cout << "invalid input\n";
                        break;
                    }
                } // switch (input)
                break;
            }
            case LIBRARY:
            {
                std::cout << "You are in the library.\n"
                          << "options: e, w\n";
                std::cin >> input;
                switch (input)
                {
                    case 'e':
                    {
                        q = KITCHEN;
                        break;
                    }
                    case 'w':
                    {
                        q = STUDY;
                        break;
                    }
                    default:
                    {
                        std::cout << "invalid input\n";
                        break;
                    }
                }
                
                break;
            }
            case STUDY:
            {
                std::cout << "You are in the study.\n"
                          << "options: n, w\n";
                std::cin >> input;
                switch (input)
                {
                    case 'n':
                    {
                        q = BEDROOM;
                        break;
                    }
                    case 'w':
                    {
                        q = LIBRARY;
                        break;
                    }
                    default:
                    {
                        std::cout << "invalid input\n";
                    }
                }
                break;
            }
            case BEDROOM:
            {
                std::cout << "You are in the bedroom.\n"
                          << "options: s, w\n";
                std::cin >> input;
                switch (input)
                {
                    case 's':
                    {
                        q = STUDY;
                        break;
                    }
                    case 'w':
                    {
                        q = KITCHEN;
                        break;
                    }
                    default:
                    {
                        std::cout << "invalid input\n";
                        break;
                    }
                }
                break;
            }
        } // switch (q)
    } // for

    std::cout << "end of game loop\n";
    return 0;
}
