#include <iostream>

const int n = 3;

int main()
{
    char board[n][n];
    for (int row = 0; row < n; ++row)
    {
        for (int col = 0; col < n; ++col)
        {
            board[row][col] = ' ';
        }
    }

    board[0][1] = 'X';
    board[1][2] = '?';

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

    
    return 0;
}
