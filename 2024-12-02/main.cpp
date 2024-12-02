#include <iostream>

int square(int); // function prototype
int cube(int);

int sign(double x)
{
    int ret;
    if (x < 0)
    {
        ret = -1;
    }
    else if (x == 0)
    {
        ret = 0;
    }
    else
    {
        ret = 1;
    }
    return ret;
}


int main()
{
    std::cout << square(3) << '\n';
    int i = 5;
    std::cout << square(i) << '\n';

    std::cout << cube(2) << '\n';
    std::cout << cube(10) << '\n';

    std::cout << sign(-1.2) << '\n';
    std::cout << sign(0.0) << '\n';
    std::cout << sign(3.14) << '\n';
    return 0;
}



int square(int x)
{
    // int ret = x * x;
    // return ret;
    return x * x;
}


int cube(int i)
{
    int ret = i * i * i;
    return ret;
}

