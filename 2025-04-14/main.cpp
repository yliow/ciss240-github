#include <iostream>

// void zero_out(int a)
// {
//     a = 0;
//     return;
// }

// void zero_out(int & a)
// {
//     a = 0;
//     return;
// }

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
    std::cout << "swap ... " << x << ' ' << y << '\n';
    return;
}

void zero_out(int x[])
{
    x[0] = 42;
    return;
}


void print(int x[], int x_size)
{
    std::cout << '{';
    for (int i = 0; i < x_size; ++i)
    {
        std::cout << x[i];
        if (i < x_size - 1) std::cout << ", ";
    }
    std::cout << '}';
}
void push_back(int x[], int & x_size, int value)
{
    x[x_size] = value;
    ++x_size;
    return;
}

int main()
{
    // int a = 42;
    // zero_out(a);
    // std::cout << a << '\n';

    int i = 0, j = 1;
    std::cout << i << ' ' << j << '\n';
    swap(i, j);
    std::cout << i << ' ' << j << '\n';

    int y[10] = {2, 3, 5, 7, 11};
    std::cout << y[0] << '\n';
    zero_out(y);
    std::cout << y[0] << '\n';

    int x[10];
    int x_size = 0;

    print(x, x_size); std::cout << '\n';
    push_back(x, x_size, 5);
    print(x, x_size); std::cout << '\n';
    push_back(x, x_size, 42);
    print(x, x_size); std::cout << '\n';
    push_back(x, x_size, 43);
    print(x, x_size); std::cout << '\n';
    
    return 0;
}
