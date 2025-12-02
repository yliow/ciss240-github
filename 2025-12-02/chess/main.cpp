#include <iostream>

int main()
{
    char board[8][8];

    for (int r = 0; r < 8; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            board[r][c] = ' ';
        }
    }

    char pieces[9] = "rnbqkbnr";
    for (int c = 0; c < 8; ++c)
    {
        board[0][c] = pieces[c];
    }
    

    for (int c = 0; c < 8; ++c)
    {
        board[1][c] = 'p';
        board[6][c] = 'p';
    }
   
    // print the chessboard
    std::cout << "+-+-+-+-+-+-+-+-+\n";
    for (int r = 0; r < 8; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << board[r][c] << '|';
        }
        std::cout << '\n';
        std::cout << "+-+-+-+-+-+-+-+-+\n";
    }

    return 0;
}
