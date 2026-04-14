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

void array_concat(int x[], int & x_len, int y[], int y_len)
{
    for (int i = 0; i < y_len; ++i)
    {
        x[x_len + i] = y[i];
    }
    x_len += y_len;
}

void array_pushback(int x[], int & x_len, int value)
{
    x[x_len] = value;
    ++x_len;
}

void bubblesort(int x[], int start, int end)
{
    for (int i = end - 2; i >= start; --i)
    {
        for (int j = start; j <= end - 2; ++j)
        {
            if (x[j] > x[j + 1])
                swap(x[j], x[j + 1]);
        }
    }
}

int binarysrch(int x[], int start, int end, int target)
{
    int lower = start;
    int upper = end - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper);
        if (x[mid] == target)
        {
            return mid;
        }
        else if (target < x[mid])
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return -1;
}
