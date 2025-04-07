#include <iostream>
#include <ctime>
#include <cstdlib>

void randarray(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 20;
    }
    return;
}

void printarray(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    return;
}
int main()
{
    srand((unsigned int) time(NULL));
    const int SIZE = 10;
    int x[SIZE];
    randarray(x, SIZE);
    printarray(x, SIZE);

    for (int j = SIZE - 2; j >= 0; --j)
    {
        //std::cout << "\nj:" << j << '\n';
        for (int i = 0; i <= j; ++i)
        {
            //std::cout << "i:" << i << '\n';
            //printarray(x, SIZE);
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
            printarray(x, SIZE);
        }
    }
    return 0;
}
