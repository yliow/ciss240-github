#include <iostream>

/*
                     library
                 N ^ /
                  / /
                 / vE
           kitchen              study
                  \
                   \
                  E v
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
            if (input == 'n')
            {
                q = LIBRARY;
            }
            else if (input == 'e')
            {
                q = BEDROOM;
            }
            else
            {
                std::cout << "invalid input\n";
            }
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
