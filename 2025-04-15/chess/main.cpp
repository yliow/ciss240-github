#include <iostream>

void init(char board[8][8]);
void draw(char board[8][8]);
    
int main()
{
    // char board[2][3] = {{'c', 'a', 't'},
    //                     {'c', 'a', 'b'}};

    // for (int r = 0; r < 2; ++r)
    // {
    //     std::cout << "+-+-+-+\n";
    //     std::cout << '|';
    //     for (int c = 0; c < 3; ++c)
    //     {
    //         std::cout << board[r][c] << '|';
    //     }
    //     std::cout << '\n';
    // }
    // std::cout << "+-+-+-+\n";

    char board[8][8];

    init(board);
    draw(board);
    
    return 0;
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
    char pieces[10] = "RNBQKBNR";
    for (int c = 0; c < 8; ++c)
    {
        board[1][c] = 'p';
        board[6][c] = 'P';
        board[7][c] = pieces[c];
        board[0][c] = pieces[c] - 'A' + 'a';
    }
    return;
}

void draw(char board[8][8])
{
    for (int r = 0; r < 8; ++r)
    {
        std::cout << "+-+-+-+-+-+-+-+-+\n";
        std::cout << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << board[r][c] << '|';
        }
        std::cout << '\n';
    }
    std::cout << "+-+-+-+-+-+-+-+-+\n";
    return;
}
    
