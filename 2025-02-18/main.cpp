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
            std::cout << "options: n, e\n";
            std::cin >> input;
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
