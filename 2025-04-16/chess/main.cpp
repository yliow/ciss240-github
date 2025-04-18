#include <iostream>

bool isupper(char c);
bool islower(char c);
void init(char board[8][8]);
void draw(char board[8][8]);
void get_move(char board[8][8], char turn,
              int & r0, int & c0, int & r1, int & c1);
bool is_valid_W_P_move(char board[8][8], int r0, int c0, int r1, int c1);

int main()
{
    int z = 42;
    std::cout << sizeof(z) << '\n';
    std::cout << sizeof(int) << '\n';


    std::cout << z % 2 << '\n';
    std::cout << z / 2 % 2 << '\n';
    std::cout << z / 4 % 2 << '\n';
    std::cout << z / 8 % 2 << '\n';
    std::cout << z / 16 % 2 << '\n';
    std::cout << z / 32 % 2 << '\n';
    std::cout << z / 64 % 2 << '\n';
    
    
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
    std::cout << sizeof(char) << '\n';
    std::cout << sizeof(board) << '\n';
    init(board);
    int grid[8][8];
    std::cout << sizeof(grid) << '\n';
    
    char turn = 'W';

    while (1)
    {
        draw(board);
        int r0, c0, r1, c1;
        get_move(board, turn, r0, c0, r1, c1);
        board[r1][c1] = board[r0][c0];
        board[r0][c0] = ' ';
        // if checkmate ... break loop

        // switch the turn
        turn = (turn == 'W' ? 'B' : 'W');
    }
    
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
    
void get_move(char board[8][8], char turn,
              int & r0, int & c0, int & r1, int & c1)
{
    while (1)
    {
        std::cout << turn << ": ";
        std::cin >> r0 >> c0 >> r1 >> c1;
        if (r0 < 0 || r0 > 7 || c1 < 0 || r1 > 7)
        {
            std::cout << "position out of bound\n";
        }
        else
        {
            char piece = board[r0][c0];
            if (turn == 'W')
            {
                if (isupper(piece))
                {
                    switch (piece)
                    {
                        case 'P':
                            if (is_valid_W_P_move(board, r0, c0, r1, c1))
                            {
                                return;
                            }
                            break;
                    }
                }
                else
                {
                    std::cout << "you did not pick up one of your pieces\n";
                }
            }
        }
    }
    return;
}

bool isupper(char c)
{
    return ('A' <= c && c <= 'Z');
}

bool islower(char c)
{
    return ('a' <= c && c <= 'z');
}

bool is_valid_W_P_move(char board[8][8], int r0, int c0, int r1, int c1)
{
    if ((r1 == r0 - 1 && c1 == c0 && board[r1][c1] == ' ') // move up 1 square
        || (r0 == 6 && r1 == 4 && c1 == c0 && board[5][c0] == ' ' && board[4][c0] == ' ') // move up 2 sqs
        || (r1 == r0 - 1 && c1 == c0 - 1 && islower(board[r1][c1])) // capture to left
        )
    {
        return true;
    }
    else
    {
        return false;
    }
}
