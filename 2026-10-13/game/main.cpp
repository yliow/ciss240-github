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
    int player_pos = rand() % 3;
    int knive_pos = rand() % 3;
    bool knive_picked = false;
    
    return 0;
}
