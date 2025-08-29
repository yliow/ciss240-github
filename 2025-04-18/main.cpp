#include <iostream>

int main()
{
    int alien_r = 1, alien_c = 0;
    int alien_dc = 1;
    int spaceship_r = 7, spaceship_c = 4;
    int laser_r = 0, laser_c = 0;
    bool laser_alive = false;
    int laser_dr = -1;
    
    while (1)
    {
        char surface[8][9];
        // clear surface
        for (int r = 0; r < 8; ++r)
        {
            for (int c = 0; c < 9; ++c)
            {
                surface[r][c] = ' ';
            }
        }
        
        // blit in the objects
        surface[spaceship_r][spaceship_c] = 'A';
        surface[alien_r][alien_c] = 'v';

        // draw surface
        std::cout << "+---------+\n";
        for (int r = 0; r < 8; ++r)
        {
            std::cout << '|';
            for (int c = 0; c < 9; ++c)
            {
                std::cout << surface[r][c];
            }
            std::cout << '|' << '\n';
        }
        std::cout << "+---------+\n";

        std::cout << "r-right l-left f-fire n-no input: ";
        // control spaceship
        char input;
        std::cin >> input;
        if (input == 'r')
        {
            ++spaceship_c;
            if (spaceship_c >= 9)
            {
                spaceship_c = 8;
            }
        }
        else if (input == 'f')
        {
            laser_r = spaceship_r - 1;
            laser_c = spaceship_c;
        }

        // move alien
        alien_c += alien_dc;
        if (alien_c >= 9)
        {
            alien_c = 8;
            alien_dc = -1;
        }
        
    }
}
