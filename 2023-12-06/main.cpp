#include <iostream>

const int NROWS = 10;
const int NCOLS = 10;
const int NALIENS = 3;

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
    int alien_r[NALIENS] = {1, 2, 3};
    int alien_c[NALIENS] = {NCOLS / 2, 1, 2};
    int alien_isalive[NALIENS] = {true, true, true};
    int alien_dc[NALIENS] = {-1, 1, 1};
    int laser_r = 0, laser_c = 0, laser_isalive = false;
    int score = 0;
    while (1)
    {
        clear(s);
        s[spaceship_r][spaceship_c] = 'A';
        s[0][0] = score + '0';
        for (int i = 0; i < NALIENS; ++i)
        {
            if (alien_isalive[i])
            {
                alien_c[i] += alien_dc[i];
                if (alien_c[i] < 0)
                {
                    alien_c[i] = 0;
                    alien_dc[i] = -alien_dc[i];
                }
                else if (alien_c[i] >= NCOLS)
                {
                    alien_c[i] = NCOLS - 1;
                    alien_dc[i] = -alien_dc[i];
                }            
                s[alien_r[i]][alien_c[i]] = 'V';
            }
        }
        if (laser_isalive)
        {
            s[laser_r][laser_c] = '|';
        }
        draw(s);

        if (laser_isalive)
        {
            --laser_r;
            if (laser_r < 0)
            {
                laser_isalive = false;
            }
            for (int i = 0; i < NALIENS; ++i)
            {
                if (alien_isalive[i]
                    && laser_r == alien_r[i]
                    && laser_c == alien_c[i])
                {
                    alien_isalive[i] = false;
                    laser_isalive = false;
                    ++score;
                }
            }
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
