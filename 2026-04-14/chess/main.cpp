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
        get_valid_move(chessboard, player, r0, c0, r1, c1);

        // now make the move
        chessboard[r1][c1] = chessboard[r0][c0];

        // switch turn
        player = (player == 'W' ? 'B' : 'W');
    }

    return 0;
}

// FOR WHITE: P, R, N, K, Q, B
// FOR BLACK: p, r, n, k, q, b
// Usually chess board shown with white on the bottom and black at the top
//
// rnbqkbnr
// pppppppp
//
//
//
//
// PPPPPPPP
// RNBQKBNK
void init(char chessboard[8][8])
{
    char pieces[9] = "rnbqkbnr";
    for (int c = 0; c < 8; ++c)
    {
        chessboard[0][c] = pieces[c]
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

void print(char chessboard[8][8])
{
    for (int r = 0; r < 8; ++r)
    {
        std::cout << '|'
        for (int c = 0; c < 8; ++c)
        {
            std::cout << chessboard[r][c] << '|';
        }
        std::cout << '\n';
    }
}

void get_valid_move(char chessboard[8][8], char player,
                    int & r0, int & c0,
                    int & r1, int & c1)
{}
