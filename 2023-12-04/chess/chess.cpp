#include <iostream>

void init_board(char chessboard[8][8]);
void print_board(char chessboard[8][8]);
 
int main()
{
    char chessboard[8][8];
    init_board(chessboard);
    print_board(chessboard);
    
    return 0;
}

void init_board(char chessboard[8][8])
{
    for (int c = 0; c < 8; ++c)
    {
        chessboard[1][c] = 'p';
        chessboard[6][c] = 'P';
        for (int r = 2; r < 6; ++r)
        {
            chessboard[r][c] = ' ';
        }
    }
    char pieces[9] = "RNBQKBNR";
    for (int c = 0; c < 8; ++c)
    {
        chessboard[7][c] = pieces[c];
        chessboard[0][c] = pieces[c] - 'A' + 'a';
    }
    
}

void print_board(char chessboard[8][8])
{
    std::cout << "  A B C D E F G H\n";
    std::cout << " +-+-+-+-+-+-+-+-+\n";
    for (int r = 0; r < 8; ++r)
    {
        std::cout << (r + 1) << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << chessboard[r][c] << '|';
        }
        std::cout << (r + 1) << '\n';
        std::cout << " +-+-+-+-+-+-+-+-+\n";
    }
    std::cout << "  A B C D E F G H\n";
}
