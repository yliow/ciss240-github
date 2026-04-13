// file: Array.cpp

#include <iostream>

void println(int x[], int start, int end)
{
    std::cout << '{';
    for (int i = start; i < end; ++i)
    {
        std::cout << x[i];
        if (i < end - 1) std::cout << ", ";
    }
    std::cout << '}' << '\n';
}

bool array_isequal(int x[], int x_len, int y[], int y_len)
{
    if (x_len == y_len)
    {
        for (int i = 0; i < x_len; ++i)
        {
            if (x[i] != y[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool array_concat(int x[], int & x_len, int y[], int y_len)
{
    for (int i = 0; i < y_len; ++i)
    {
        x[x_len + i] = y[i];
    }
    x_len += y_len;
}

