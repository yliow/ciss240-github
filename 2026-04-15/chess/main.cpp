#include <iostream>

const char WHITE = 'W';
const char BLACK = 'B';

void init(char chessboard[8][8]);
void print(char chessboard[8][8]);
void get_valid_move(char chessboard[8][8], char player,
                    int & r0, int & c0,
                    int & r1, int & c1);

int main()
{
    char chessboard[8][8];
    init(chessboard);
    char player = WHITE;

    while (1)
    {
        // get the move
        int r0, c0; // move a piece from (r0, c0)
        int r1, c1; // ... to (r1, c1)
        print(chessboard);
        get_valid_move(chessboard, player, r0, c0, r1, c1);

        // now make the move
        chessboard[r1][c1] = chessboard[r0][c0];

        // switch turn
        player = (player == 'W' ? 'B' : 'W');
    }

    return 0;
}

void init(char chessboard[8][8])
{
    char pieces[9] = "rnbqkbnr";
    for (int c = 0; c < 8; ++c)
    {
        chessboard[0][c] = pieces[c];
        chessboard[1][c] = 'p';
        chessboard[6][c] = 'P';
        chessboard[7][c] = (pieces[c] - 'a') + 'A';       
    }
    for (int r = 2; r < 6; ++r)
    {
        for (int c = 0; c < 8; ++c)
        {
            chessboard[r][c] = ' ';
        }
    }
}

void print_hor_line()
{
    std::cout << "+";
    for (int c = 0; c < 8; ++c)
    {
        std::cout << "-+";
    }
    std::cout << '\n';
}
void print_a_to_h()
{
    std::cout << ' ';
    for (char c = 'a'; c <= 'h'; ++c)
    {
        std::cout << ' ' << c;
    }
    std::cout << '\n';
}
void print(char chessboard[8][8])
{
    print_a_to_h();
    std::cout << ' '; print_hor_line();
    for (int r = 0; r < 8; ++r)
    {
        std::cout << 8 - r;
        std::cout << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << chessboard[r][c] << '|';
        }
        std::cout << 8 - r;
        std::cout << '\n';
        std::cout << ' '; print_hor_line();
    }
    print_a_to_h();
}

bool is_player_piece(char chessboard[8][8], char player, int r, int c)
{
    char piece = chessboard[r][c];
    return (player == 'W'
            ? 'A' <= piece && piece <= 'Z'
            : 'a' <= piece && piece <= 'z');
}

bool is_valid_white_pawn_move(char chessboard[8][8],
                              int r0, int c0, int r1, int c1)
{
    if (r0 == 6)
    {
        // pawn is at beginning row
        if ((r1 == r0 - 1 || r1 == r0 - 2)
            && c1 == c0
            && chessboard[r1][c1] == ' ')
        {
            return true; // this is a move, not a capture
        }
        if (chessboard[r1][c1] != ' '
            && (c1 == c0 - 1 || c1 == c0 + 1)
            && (r1 == r0 - 1))
        {
            return true; // this is a capture
        }
    }
    else
    {
        // pawn is NOT at beginning row
        if (r1 == r0 - 1
            && c1 == c0
            && chessboard[r1][c1] == ' ')
        {
            return true; // this is a move, not a capture
        }
        if (chessboard[r1][c1] != ' '
            && (c1 == c0 - 1 || c1 == c0 + 1)
            && (r1 == r0 - 1))
        {
            return true; // this is a capture
        }
    }
    return false;
}

void get_valid_move(char chessboard[8][8], char player,
                    int & r0, int & c0,
                    int & r1, int & c1)
{
    while (1)
    {
        std::cout << player << "'s move: ";
        std::cin >> r0 >> c0 >> r1 >> c1;

        // check r0, c0, r1, c1 in [0..7]
        if (r0 < 0 || r0 > 7 ||
            c0 < 0 || c0 > 7 ||
            r1 < 0 || r1 > 7 ||
            c1 < 0 || c1 > 7)
        {
            std::cout << "move not in board\n";
            continue;
        }
        if (!is_player_piece(chessboard, player, r0, c0))
        {
            std::cout << "you have to pick up your own piece\n";
            continue;
        }
        // check piece is placed on space or enemy piece
        if (chessboard[r1][c1] == ' ' ||
            is_player_piece(chessboard, (player == 'W' ? 'B' : 'W'), r0, c0))
        {
            std::cout << "you have to put the piece at space/enemy spot\n";
            continue;            
        }
        if (chessboard[r0][c0] == 'P')
        {
            if (!is_valid_white_pawn_move(chessboard, r0, c0, r1, c1))
            {
                std::cout << "invalid white pawn move\n";
                continue;
            }
        }
        break;
    }
}

