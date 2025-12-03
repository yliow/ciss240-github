#include <iostream>

void init(char board[8][8]);
void print(char board[8][8]);


int main()
{
    char board[8][8];
    init(board);
    print(board);

    return 0;
}


// print the chessboard    
void print(char board[8][8])
{
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

}

void init(char board[8][8])
{
    for (int r = 2; r < 6; ++r)
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
        board[7][c] = pieces[c] - 'a' + 'A';
        board[1][c] = 'p';
        board[6][c] = 'p';
    }
    return;
}
