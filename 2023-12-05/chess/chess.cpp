#include <iostream>

void init_board(char chessboard[8][8]);
void print_board(char chessboard[8][8]);
void get_valid_move(char chessboard[8][8], char,
                    int & r0, int & c0, int & r1, int & c1);
bool valid_white_pawn_move(char chessboard[8][8],
                           int r0, int c0, int r1, int c1);
bool is_black(char);

int main()
{
    char chessboard[8][8];
    init_board(chessboard);
    char turn = 'W';
    while (1)
    {
        print_board(chessboard);
        int r0, c0, r1, c1;
        get_valid_move(chessboard, turn, r0, c0, r1, c1);
        chessboard[r1][c1] = chessboard[r0][c0];
        chessboard[r0][c0] = ' ';

        turn = (turn == 'W' ? 'B' : 'W');
    }
    
    return 0;
}

bool is_black(char piece)
{
    return (piece == 'p' || piece == 'r' || piece == 'n' || piece == 'b'
        || piece == 'k' || piece == 'q');
}

bool valid_white_pawn_move(char chessboard[8][8],
                           int r0, int c0, int r1, int c1)
{
    // Assume simpler NO en passant.
    if (r0 == 6) // at initial row
    {
        if (r0 - 1 == r1 && c0 == c1 && chessboard[r1][c1] == ' ')
        {
            // noncapturing move up by 1
            return true;
        }
        if (r0 - 2 == r1 && c0 == c1
            && chessboard[r1][c1] == ' '
            && chessboard[r1 + 1][c1] == ' '
            )
        {
            // noncapturing move up by 2
            return true;
        }
        if (r0 - 1 == r1 && (c0 - 1 == c1 || c0 + 1 == c1) 
            && is_black(chessboard[r1][c1]))
        {
            // capture move up by 1 diagonally
            return true;
        }
    }
    else // not a initial position
    {
        if (r0 - 1 == r1 && c0 == c1 && chessboard[r1][c1] == ' ')
        {
            // noncapturing move up by 1
            return true;
        }
        if (r0 - 1 == r1 && (c0 - 1 == c1 || c0 + 1 == c1) 
            && is_black(chessboard[r1][c1]))
        {
            // capture move up by 1 diagonally
            return true;
        }
    }
    return false;
}

void get_valid_move(char chessboard[8][8], char turn,
                     int & r0, int & c0, int & r1, int & c1)
{
    while (1)
    {
        std::cout << turn << " to make a move: ";
        std::cin >> r0 >> c0 >> r1 >> c1;
        char piece = chessboard[r0][c0];
        if (turn == 'W' && piece == 'P')
        {
            if (valid_white_pawn_move(chessboard, r0, c0, r1, c1))
            {
                break;
            }
        }
        if (turn == 'B')
        {
            // TODO
            break;
        }
    }
    return;
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
