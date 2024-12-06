#include <iostream>
#include <cmath>

int digit(int n, int i)
{
    return (n / int(pow(10, i))) % 10;
}

void print_array(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
}

void inc0(int i)
{
    ++i;
}
void inc1(int & i)
{
    ++i;
}
void inc2(int x[])
{
    ++x[0];
}

double sum_array(double x[], int n)
{
    double s = 0.0;
    for (int i = 0; i < n; ++i)
    {
        s += x[i];
    }
    return s;
}

int max_array(int y[], int n)
{
    int m = y[0];
    for (int i = 1; i < n; ++i)
    {
        if (y[i] > m)
        {
            m = y[i];
        }
    }
    return m;
}

int max_index(int x[], int n)
{
    int m = x[0];
    int index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (x[i] > m)
        {
            m = x[i];
            index = i;
        }
    }
    return index;
}


int linear_search(int x[], int n, int target)
{
    for (int i = 0; i < n; ++i)
    {
        if (x[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void bubblesort(int x[], int n)
{
    for (int i = 0; i <= n - 2; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
}

int main()
{
    std::cout << digit(15327, 3) << '\n';
    std::cout << digit(7805362, 5) << '\n';
    std::cout << digit(7805362, 0) << '\n';
    std::cout << digit(0, 0) << '\n';
    std::cout << digit(1572, 6) << '\n';

    int x[] = {2, 3, 5, 7, 11};
    print_array(x, 5);
    print_array(x, 3);

    int i = 0;
    inc0(i);
    std::cout << i << '\n';
    inc1(i);
    std::cout << i << '\n';
    inc2(x);
    print_array(x, 5);

    double y[] = {1.1, 2.2, 3.0};
    double s = sum_array(y, 3);
    std::cout << s << '\n';

    int z[] = {5, 3, 2, 4, 6, 0};
    int m = max_array(z, 6);
    std::cout << m << '\n';
    int index = max_index(z, 6);
    std::cout << index << '\n';

    std::cout << linear_search(z, 6, 4) << '\n';

    bubblesort(z, 6);
    print_array(z, 6);
    
    return 0;
}
