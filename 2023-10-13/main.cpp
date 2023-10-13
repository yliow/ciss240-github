#include <iostream>

int main()
{
    const int DINING_HALL = 0;
    const int BEDROOM = 1;
    const int ARMORY = 2;
    
    int pos = 0;
    char option;
    switch (pos)
    {
        case DINING_HALL:
            std::cout << "you are now in the dining hall\n";
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
            break;

        case ARMORY:
            break;
    }
    std::cout << "pos:" << pos << '\n';
    return 0;
}
