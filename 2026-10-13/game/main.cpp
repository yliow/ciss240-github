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
 "you are in the living room. you can go n or w."
 if player enter 'n', player is in library and program prints:
 "you are in the library. you can go e or w."
 
 let player make one move.

 after you are done with above, handle the knive.
 the output is
 "you are in the living room. you can go n or w."
 or
 "you are in the living room. there's a knive on the floor. you can go n or w or enter k to pick up knife."
 or 
 "you are in the living room. you can go n or w."
 "you have a knife." 
 
*/
int main()
{
    srand((unsigned int) time(NULL));
    int player_pos = rand() % 3;
    int knive_pos = rand() % 3;
    bool knive_picked = false;
    
    return 0;
}
