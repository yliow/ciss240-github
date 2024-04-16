#include <iostream>

const int n = 3;

void init_board(char board[n][n]);
void print_board(char board[n][n]);
void get_move(char board[n][n], char turn, int & row, int & col);
bool is_winning_move(char board[n][n], int row, int col);
bool is_winning_row(char board[n][n], int row, char piece);

int main()
{
    char board[n][n];
    init_board(board);
    board[0][1] = 'X';
    board[1][2] = '?';

    char turn = 'X';
    while (1)
    {
        
        // Get move from player. (note: keep asking for row, col until it's valid.)
        int row, col;
        get_move(board, turn, row, col);
        
        // make move for player
        board[row][col] = turn;

        // check if game ended, i.e., 
        // 1. there's a winner
        // 2. it's a draw ... every empty square has been taken
        if (is_winning_move(board, row, col))
        {
            break;
        }
        
        // toggle the turn variable
        turn = (turn == 'X' ? 'O' : 'X');
    }
    return 0;
}


void print_board(char board[n][n])
{
    // print dividing line
    std::cout << '+';
    for (int col = 0; col < n; ++col)
    {
        std::cout << '-' << '+';
    }
    std::cout << '\n';

    for (int row = 0; row < n; ++row)
    {
        // print values of 1 row in board
        std::cout << '|';
        for (int col = 0; col < n; ++col)
        {
            std::cout << board[row][col] << '|';
        }
        std::cout << '\n';

        // print dividing line
        std::cout << '+';
        for (int col = 0; col < n; ++col)
        {
            std::cout << '-' << '+';
        }
        std::cout << '\n';
    }
    return;
}


void init_board(char board[n][n])
{
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            board[row][col] = ' ';
        }
    }
    return;
}


void get_move(char board[n][n], char turn, int & row, int & col)
{
    while (1)
    {
        print_board(board);
        std::cout << "player " << turn << " ... enter move with row and col: ";
        std::cin >> row >> col;
        if (board[row][col] == ' ')
        {
            break;
        }
        std::cout << "WRONG MOVE!!!\n";
    }
    return;
}

// Check if row row is a winning
bool is_winning_row(char board[n][n], int row, char piece)
{
    for (int c = 0; c < n; ++c)
    {
        if (board[row][c] != piece)
        {
            win = false;
            break;
        }
    }
    if (win) return true;
}

bool is_winning_move(char board[n][n], int row, int col)
{
    char piece = board[row][col]; // the piece that the player just put down
    bool win = true;
    
    
    // check if column col is a winning col
    win = true;
    for (int r = 0; r < n; ++r)
    {
        if (board[r][col] != piece)
        {
            win = false;
            break;
        }
    }
    if (win) return true;
    
    // check if forward diag is winning diag    
    // check if reverse diag is winning diag    

}
