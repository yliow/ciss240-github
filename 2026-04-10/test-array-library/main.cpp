#include <iostream>
#include "Array.h"

int main()
{
    int x[] = {5, 3, 1, 2, 4, 8, 7};
    println(x, 2, 6);

    int y[] = {5, 3, 1, 2, 4};
    std::cout << array_isequal(x, 5, y, 5) << '\n';

    // if x[] is {1, 3, 5}, x_len = 3 and y[] is {2,4,6,8}, y_len = 4
    // after array_concat(x, x_len, y, y_len), x[] becomes {1,3, 5,2,4,6,8}
    // and x_len = 7.

    // if x[] is {1, 3, 5}, x_len is 3, after array_pushback(x, xlen, 99)
    // x[] is {1, 3, 5, 99}, x_len is 4.
    
    return 0;
}
