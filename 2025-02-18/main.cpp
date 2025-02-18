#include <iostream>

/*
                     library
                 N ^ /      \ ^W
                  / /        \ \
                 / vE        Ev \
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
            break;
        }
        case STUDY:
        {
            break;
        }
        case BEDROOM:
        {
            break;
        }
    }
    
    return 0;
}
