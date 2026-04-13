#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

void bubblesort(int x[], int start, int end)
{
    for (int i = end - 2; i >= 0; --i)
    {
        for (int j = start; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
            }
        }
    }
}

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

int binarysrch(int x[], int start, int end, int target)
{
    int lower = start;
    int upper = end - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
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

void rand_array(int x[], int n, int min, int max)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % (max - min) + min;
    }
}

void f(int x[])
{
    std::cout << sizeof(x) << '\n';
}
int main()
{
    srand((unsigned int) time(NULL));
    int x[] = {5, 3, 1, 2, 4, 6, 8, 7};
    println(x, 0, 8);
    bubblesort(x, 2, 8);
    println(x, 0, 8);
    int i = binarysrch(x, 2, 8, 7);
    std::cout << i << ' ' << x[i] << '\n';
    i = binarysrch(x, 2, 8, 0);
    std::cout << i << '\n';
    rand_array(x, 8, 10, 20);
    println(x, 0, 8);

    std::cout << sizeof(x) << '\n';
    std::cout << sizeof(int) << '\n';
    std::cout << sizeof(x) / sizeof(int) << '\n';
    f(x);
    return 0;
}
