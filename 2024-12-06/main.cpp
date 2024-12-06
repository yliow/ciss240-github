#include <iostream>

void init(char board[8][8]);
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
    init(board);
    print_board(board);    

    return 0;
}

// Set up initial chess game state
void init(char board[8][8])
{
    // clear board
    for (int r = 0; r < 8; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            board[r][c] = ' ';
        }
    }
    // set up black and white pawns
    for (int c = 0; c < 8; ++c)
    {
        board[1][c] = 'p';
        board[6][c] = 'P';
    }
    char pieces[] = "RNBQKBNR";
    for (int c = 0; c < 8; ++c)
    {
        board[0][c] = 'a' + (pieces[c] - 'A');
        board[7][c] = pieces[c];
    }
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
