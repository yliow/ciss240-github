#include <iostream>

const int NROWS = 10;
const int NCOLS = 10;

void clear(char s[NROWS][NCOLS])
{
    for (int r = 0; r < NROWS; r++)
    {
        for (int c = 0; c < NCOLS; c++)
        {
            s[r][c] = ' ';
        }
    }
}

void draw(char s[NROWS][NCOLS])
{
    std::cout << '+';
    for (int c = 0; c < NCOLS; ++c)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
    for (int r = 0; r < NROWS; r++)
    {
        std::cout << '|';
        for (int c = 0; c < NCOLS; c++)
        {
            std::cout << s[r][c];
        }
        std::cout << "|\n";
    }
    std::cout << '+';
    for (int c = 0; c < NCOLS; ++c)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
}

int main()
{
    char s[NROWS][NCOLS];
    int spaceship_r = NROWS - 1, spaceship_c = NCOLS / 2;
    int alien_r = 1, alien_c = NCOLS / 2;
    int laser_r = 0, laser_c = 0, laser_isalive = false;
    while (1)
    {
        clear(s);
        s[spaceship_r][spaceship_c] = 'A';
        s[alien_r][alien_c] = 'V';
        if (laser_isalive)
        {
            s[laser_r][laser_c] = '|';
        }
        draw(s);

        if (laser_isalive)
        {
            --laser_r;
        }
        std::cout << "l-left r-right f-fire n-no input q-quit: ";
        char input;
        std::cin >> input;
        switch (input)
        {
            case 'l':
                if (spaceship_c > 0)
                {
                    --spaceship_c;
                }
                break;
            case 'r':
                if (spaceship_c < NCOLS - 1)
                {
                    ++spaceship_c;
                }
                break;
            case 'f':
                if (!laser_isalive)
                {
                    laser_isalive = true;
                    laser_r = spaceship_r - 1;
                    laser_c = spaceship_c;
                }
                break;
            case 'n':
                break;
        }
        if (input == 'q') break;
    }
    return 0;
}
