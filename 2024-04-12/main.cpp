#include <iostream>
#include <iomanip>

void printDollar(int c);
double max(double, double);
void zero_out(int & i);
void swap(int &, int &);
void set_zero(int x[], int n);
void swap(int x[], int i, int j);
int main()
{
    // printDollar(123);
    // printDollar(76543);
    // printDollar(56789000);

    // std::cout << max(1.25, 5.01) << '\n';
    // std::cout << max(5.01, 1.25) << '\n';
    // std::cout << max(12.34, 12.34) << '\n';

    // int i = 42;
    // zero_out(i); // intention: set i to 0.
    // std::cout << i << '\n';

    // int x = 5, y = 123;
    // swap(x, y);
    // std::cout << x << ' ' << y << '\n';

    // int z[10] = {5, 3, 1, 2, 4, 6, 7, 2, 3, 1};
    // set_zero(z, 5);
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << z[i] << ' ';
    // }
    // std::cout << '\n';

    // swap(z, 5, 8);
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << z[i] << ' ';
    // }
    // std::cout << '\n';

    int w[3][4];
    w[1][2] = 42;
    std::cout << w[i][2] << '\n';



    
    return 0;
}


void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
    std::cout << "inside swap ... " << a << ' ' << b << '\n';
}

void zero_out(int & i)
{
    i = 0;
}

void printDollar(int c)
{
    std::cout << '$' << c / 100 << '.'
              << std::setw(2) << std::setfill('0') << c % 100 << '\n';
    return;
}

double max(double x, double y)
{
    // if (x >= y)
    // {
    //     return x;
    // }
    // else
    // {
    //     return y;
    // }
    return (x >= y ? x : y);
}

// set the first n values in x to 0, i.e.,
void set_zero(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = 0;
    }
}

// swap x[i] and x[j]
void swap(int x[], int i, int j)
{
    int t = x[i];
    x[i] = x[j];
    x[j] = t;
}
