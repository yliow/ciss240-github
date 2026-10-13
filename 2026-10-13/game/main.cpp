#include <iostream>
#include <cstdlib>
#include <ctime>

/*
  adventure game
  
             living room 0
            / ^            ^ \
          n/ /e            n\ \ w
          v /        w       \ v
      library 1 ----------> bedroom 2
                <----------
                     s
                     
 player is randomly placed in a room.
 if player is in the living room, program prints
 "you are in the living room. you can do n or w."
 
*/
int main()
{
    srand((unsigned int) time(NULL));
    int player_pos = rand() % 3;
    int knive_pos = rand() % 3;
    bool knive_picked = false;
    
    return 0;
}
