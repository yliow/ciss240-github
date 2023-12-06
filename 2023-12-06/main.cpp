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

    while (1)
    {
        clear(s);
        s[spaceship_r][spaceship_c] = 'A';
        s[alien_r][alien_c] = 'V';
        draw(s);
        std::cout << "l-left r-right f-fire n-no input: ";
        char input;
        std::cin >> input;
        switch (input)
        {
            case 'l':
                --spaceship_c;
                break;
            case 'r':
                ++spaceship_c;
                break;
            case 'f':
                break;
            case 'n':
                break;
        }
                
    }
    return 0;
}
