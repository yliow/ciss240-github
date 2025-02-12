#include <iostream>
#include <ctime>
#include <cstdlib>

/*

      x0    x1   x2
       3     2    1
P1     -------
       2     3    1
             ------
       2     1    3
===================
P2     -------
       1     2    3


       x0   x1   x2   x3
P1      5    3    1    4
        ------
        3    5    1    4
             ------
        3    1    5    4
                  ------
        3    1    4   *5
========================
P2      ------
        1    3    4   *5
             ------
        1    3   *4   *5
========================
P3      ------
        1   *3   *4   *5
========================

4 vars: how many swaps, count pairs: 3 + 2 + 1 = 6
5 vars: ...........................: 4 + 3 + 2 + 1 = 10
n vars: ...........................: (n - 1) + (n - 2) + ... + 1
 */
int main()
{
    // bubblesort on 4 variables x0, x1, x2, x3
    // int x0, x1, x2, x3;
    // std::cin >> x0 >> x1 >> x2 >> x3;

    // int t;
    // std::cout << "Pass #1\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x1 > x2)
    // {
    //     t = x1;
    //     x1 = x2;
    //     x2 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x2 > x3)
    // {
    //     t = x2;
    //     x2 = x3;
    //     x3 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    // std::cout << "Pass 2\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';
    // if (x1 > x2)
    // {
    //     t = x1;
    //     x1 = x2;
    //     x2 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n'; 

    // std::cout << "Pass 3\n";
    // if (x0 > x1)
    // {
    //     t = x0;
    //     x0 = x1;
    //     x1 = t;
    // }
    // std::cout << x0 << ' ' << x1 << ' ' << x2 << ' ' << x3 << '\n';

    srand((unsigned int) time(NULL));

    int x = rand() % 10 + 90;
    int y = rand() % 10 + 90;
    std::cout << "What is " << x << " x " << y << "? ";
    int guess;
    std::cin >> guess;

    if (guess == x * y)
    {
        std::cout << "Correct!\n";
    }
    else
    {
        // First answer is incorrect
        std::cout << "Incorrect! Try again.\n";
        std::cout << "What is " << x << " x " << y << "? ";
        std::cin >> guess;

        if (guess == x * y)
        {
            std::cout << "Correct!\n";
        }
        else
        {
            std::cout << "Incorrect! The correct answer is " << x * y << "\n";
        }
    }
    
    return 0;
}


// get '+', '-', '*'
//     0 -> '+'
//     1 -> '-'
//     2 -> '*'
