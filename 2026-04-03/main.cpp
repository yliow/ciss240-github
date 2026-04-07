#include <iostream>

// sum up values x[start], ..., x[end - 1]
int sum(int x[], int start, int end)
{
    int s = 0;
    for (int i = start; i < end; ++i)
    {
        s += x[i];
    }
    return s;
}

int linearsrch(int x[], int start, int end, int target)
{
    for (int i = start; i < end; ++i)
    {
        if (x[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int count(int x[], int start, int end, int target)
{
    return 0;
}

int max(int x[], int start, int end) // min
{
    return 0;
}

void bubblesort(int x[], int start, int end)
{}

int binarysrch(int x[], int start, int end, int target)
{}

int main()
{
    int x[1024] = {5, 3, 4, 6, 2, 3, 4};
    int s = sum(x, 1, 5); // x[1] + ... + x[4] = 15
    std::cout << s << '\n';
    int index = linearsrch(x, 1, 5, 10);
    std::cout << index << '\n';
    index = linearsrch(x, 1, 5, 3);
    std::cout << index << '\n';
    index = linearsrch(x, 1, 2, 3);
    std::cout << index << '\n';
    return 0;
}
