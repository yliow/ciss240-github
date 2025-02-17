/*

  s = 1 + 2 + 3 + 4
  -----
  ---------
  -------------
  -----------------

  s = 0
  i = 1
  
  s = s + i
  i = i + 1

  s = s + i
  i = i + 1

  s = s + i
  i = i + 1
  
  etc.

  m = max of x0, x1, x2, x3
  x0 x1 x2 x3

  m = x0

  if (x1 > m) m = x1

  if (x2 > m) m = x2

  if (x3 > m) m = x3
 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    // find computation
    // int x0, x1, x2, x3;
    // std::cin >> x0 >> x1 >> x2 >> x3;

    // int target;
    // std::cin >> target;

    /*
    if (x0 == target && ......)
    {
        index = 0;
    }
    else if (x0 != target && x1 == target)
    {
        index = 1;
    }
    else if (x0 != target && x1 != target && x2 == target)
    {
        index = 2;
    }
    */

    // // linear search
    // int index;
    // if (x0 == target)
    // {
    //     index = 0;
    // }
    // else if (x1 == target)
    // {
    //     index = 1;
    // }
    // else if (x2 == target)
    // {
    //     index = 2;
    // }
    // else if (x3 == target)
    // {
    //     index = 3;
    // }
    // else
    // {
    //     index = -1;
    // }
    // std::cout << "index: " << index << '\n';


    /*
       5 -----> +1 ("positive")
      -3 -----> -1 ("negative")
      42 -----> +1 
      -9 -----> -1
       0 -----> +1

       "sign" function
     */
    // int x;
    // std::cin >> x;
    // int sign;
    // // if (x >= 0)
    // // {
    // //     sign = +1;
    // // }
    // // else
    // // {
    // //     sign = -1;
    // // }
    // sign = (x >= 0 ? +1 : -1);
    // std::cout << "sign of " << x << " = "
    //           << sign << '\n';

    // int die_roll = rand() % 6 + 1;
    // std::cout << die_roll << '\n';
    // // if (die_roll == 6)
    // // {
    // //     std::cout << "you win\n";
    // // }
    // // else
    // // {
    // //     std::cout << "you lose\n";
    // // }   
    // std::cout << (die_roll == 6 ? "you win\n" : "you lose\n");

    // int die0, die1;
    // die0 = rand() % 6 + 1;
    // die1 = rand() % 6 + 1;
    // std::cout << die0 << ' ' << die1 << '\n';
    // std::cout << (die0 == die1 ? "you win\n" : "you lose\n");

    int x;
    std::cin >> x;

    std::cout << "outside ... top\n";
    if (x == 0)
    {
        std::cout << "green\n";
    }
    else if (x == 1)
    {
        std::cout << "eggs\n";
    }
    else if (x == 2)
    {
        std::cout << "and\n";
    }
    else
    {
        std::cout << "ham\n";
    }
    std::cout << "outside ... bottom\n";
    return 0;
}
