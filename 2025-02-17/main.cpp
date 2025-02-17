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

int main()
{
    // find computation
    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;

    int target;
    std::cin >> target;

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

    // linear search
    if (x0 == target)
    {
        index = 0;
    }
    else if (x1 == target)
    {
        index = 1;
    }
    else if (x2 == target)
    {
        index = 2;
    }
    else if (x3 == target)
    {
        index = 3;
    }
    else
    {
        index = -1;
    }
    std::cout << "index: " << index << '\n';
    return 0;
}
