#include <iostream>

void zero_out(int & y)
{
    y = 0;
    std::cout << "zero out ... y:" << y << '\n';
}

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}
void zero_out_array_index_0(int p[10])
{
    p[0] = 0;
}

int main()
{
    int x = 42;
    std::cout << "x:" << x << '\n';
    zero_out(x);
    std::cout << "x:" << x << '\n';

    int i = 2, j = 34;
    swap(i, j);
    std::cout << i << ' ' << j << '\n';

    int z[10] = {5, 3, 1, 2, 4, 6};
    zero_out_array_index_0(z);
    std::cout << z[0] << ' ' << z[1] << ' ' << z[2] << '\n';
    return 0;
}
