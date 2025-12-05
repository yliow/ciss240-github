#include <iostream>

const char WHITE = 'W';
const char BLACK = 'B';

void init(char board[8][8]);
void print(char board[8][8]);
void get_move(char board[8][8], char turn,
              int & r0, int & c0, int & r1, int & c1);
bool is_valid(char board[8][8], char turn, int r0, int c0, int r1, int c1);
bool is_white(char piece);
bool is_black(char piece);


int main()
{
    char board[8][8];
    init(board);
    char turn = WHITE;
    while (1)
    {
        print(board);
        std::cout << turn << "'s turn: ";

        // get the move
        int r0, c0, r1, c1;
        get_move(board, turn, r0, c0, r1, c1);
        
        // make the move
        char piece = board[r0][c0];
        board[r0][c0] = ' ';
        board[r1][c1] = piece;

        // toggle the turn
        turn = (turn == 'W' ? 'B' : 'W');
    }

    return 0;
}


void get_move(char board[8][8], char turn,
              int & r0, int & c0, int & r1, int & c1)
{
    while (1)
    {
        std::cin >> r0 >> c0 >> r1 >> c1;
        if (is_valid(board, turn, r0, c0, r1, c1))
        {
            break;
        }
        std::cout<< "WRONG MOVE!!! TRY AGAIN!!!\n";
    }
    return;
}


bool is_black(char piece)
{
    return (piece == 'p' || piece == 'r' || piece == 'n' || piece == 'b'
            || piece == 'k' || piece == 'q');
}


bool is_white(char piece)
{
    return (piece == 'P' || piece == 'R' || piece == 'N' || piece == 'B'
            || piece == 'K' || piece == 'Q');
}


bool is_valid(char board[8][8], char turn, int r0, int c0, int r1, int c1)
{
    // Check if piece belongs to turn/player
    char piece = board[r0][c0];
    if (piece == ' ')
    {
        return false;
    }
    else if (turn == WHITE && is_black(piece))
    {
        return false;
    }
    else if (turn == BLACK && is_white(piece))
    {
        return false;
    }

    return true; // TODO
}

// print the chessboard    
void print(char board[8][8])
{
    std::cout << " +-+-+-+-+-+-+-+-+\n";
    for (int r = 0; r < 8; ++r)
    {
        std::cout << 8 - r;
        std::cout << '|';
        for (int c = 0; c < 8; ++c)
        {
            std::cout << board[r][c] << '|';
        }
        std::cout << '\n';
        std::cout << " +-+-+-+-+-+-+-+-+\n";
    }
    std::cout << "  a b c d e f g h\n";

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
        board[6][c] = 'P';
    }
    return;
}
