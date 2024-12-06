#include <iostream>

void print_board(char board[8][8]);

int main()
{
    /*
    int x[8];
    x[0] = 5;
    for (int i = 0; i < 8; ++i)
    {
        std::cout << x[i] << '\n';
    }
    */

    char board[8][8];

    // clear the board
    for (int r = 0; r < 8; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            board[r][c] = ' ';
        }
    }

    print_board(board);    

    return 0;
}


void print_board(char board[8][8])
{
    std::cout << "+--------+\n";
    for (int r = 0; r < 8; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << board[r][c];
        }
        std::cout << "|\n";
    }
    std::cout << "+--------+\n";
}
