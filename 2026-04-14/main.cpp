#include <iostream>

const int ROW_SIZE = 3;
const int COL_SIZE = 3;

void init(char ttt[ROW_SIZE][COL_SIZE]);
void print(char ttt[ROW_SIZE][COL_SIZE]);
void get_valid_input(char ttt[ROW_SIZE][COL_SIZE], char player,
                     int & r, int & c);
bool check_game_ended(char ttt[ROW_SIZE][COL_SIZE], int r, int c);

int main()
{
    char ttt[ROW_SIZE][COL_SIZE];
    init(ttt); // set ttt to all spaces
    char player = 'X';
    
    while (1)
    {
        int r, c;
        get_valid_input(ttt, player, r, c);
        ttt[r][c] = player;
        
        // check if game is completed. if so, break
        bool ended = check_game_ended(ttt, r, c);
        if (ended) break;
        
        // toggle player turn
        player = (player == 'X' ? 'O' : 'X');
    }
    // print result of game
    return 0;
}

bool check_game_ended(char ttt[ROW_SIZE][COL_SIZE], int r, int c)
{
    return false;
}

void get_valid_input(char ttt[ROW_SIZE][COL_SIZE],
                     char player,
                     int & r, int & c)
{
    while (1)
    {
        print(ttt);
        std::cout << "Player " << player << "'s turn\n";
        std::cout << "Enter row and column:";
        std::cin >> r >> c;
        if (0 <= r < ROW_SIZE && 0 <= c < COL_SIZE && ttt[r][c] == ' ')
        {
            break;
        }
    }
}

void init(char ttt[ROW_SIZE][COL_SIZE])
{
    for (int r = 0; r < ROW_SIZE; ++r)
    {
        for (int c = 0; c < COL_SIZE; ++c)
        {
            ttt[r][c] = ' ';
        }
    }

}

void print_hor_line()
{
    std::cout << "+";
    for (int c = 0; c < COL_SIZE; ++c)
    {
        std::cout << "-+";
    }
    std::cout << '\n';
}

/*
     +-+-+-+
     | | | |
     +-+-+-+
     | | | |
     +-+-+-+
     | | | |
     +-+-+-+
 */
void print(char ttt[ROW_SIZE][COL_SIZE])
{
    print_hor_line();
    for (int r = 0; r < ROW_SIZE; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < COL_SIZE; ++c)
        {
            std::cout << ttt[r][c] << '|';
        }
        std::cout << '\n';
        print_hor_line();
    }
}
