#include <iostream>

// void swap(int & a, int & b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }
// void bubblesort(int x[], int n)
// {
//     for (int i = 0; i < n - 2; ++i)
//     {
//         for (int j = 0; j <= i; ++j)
//         {
//             if (x[j] > x[j + 1])
//             {
//                 swap(x[j], x[j + 1]);
//             }    
//         }
//     }
// }

// int count(int x[], int n, int target)
// {
//     int counter = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         if (x[i] == target)
//         {
//             ++counter;
//         }
//     }
//     return counter;
// }

// bool isequal(int x[], int y[], int start, int end)
// {
//     for (int i = start; i < end; ++i)
//     {
//         if (x[i] != y[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

const int n = 9;

void clear(char surface[n][n]);
void draw(char surface[n][n]);

int main()
{

    // int x[1000] = {5, 3, 1, 2, 4, 6};
    // bubblesort(x, 6);

    // int x[3] = {4, 2, 5};
    // int y[3] = {4, 2, 5};
    // std::cout << isequal(x, y, 0, 3) << '\n';
    // this does not compare array contents!!!!!!!
    //std::cout << (x == y) << '\n';
    //std::cout << x << '\n';
    //std::cout << y << '\n';
    //std::cout << (x != y) << '\n';

    int ship_row = n - 1;
    int ship_col = n / 2;

    char surface[n][n];

    while (1)
    {
        clear(surface);
        surface[ship_row][ship_col] = 'A';
        draw(surface);
        std::cout << "l-left r-right f-fire n-no input q-quit\n";
        char input;
        std::cin >> input;
        if (input == 'l')
        {
            if (ship_col > 0)
            {
                --ship_col;
            }
        }
        else if (input == 'r')
        {
            if (ship_col < n - 1)
            {
                ++ship_col;
            }
        }
    }
    
    return 0;
}

void clear(char surface[n][n])
{
    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            surface[r][c] = ' ';
        }       
    }       
}

void draw(char surface[n][n])
{
    std::cout << '+';
    for (int c = 0; c < n; ++c)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
    for (int r = 0; r < n; ++r)
    {
        std::cout << '|';
        for (int c = 0; c < n; ++c)
        {
            std::cout << surface[r][c];
        }
        std::cout << "|\n";
    }
    std::cout << '+';
    for (int c = 0; c < n; ++c)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
}
