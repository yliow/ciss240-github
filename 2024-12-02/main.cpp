#include <iostream>

int square(int); // function prototype
int cube(int);
int sign(double);
int sum(int);
void printHelloWorld(int);
void print42();

int main()
{
    std::cout << square(3) << '\n';
    int i = 5;
    std::cout << square(i) << '\n';
    square(10);
    
    std::cout << cube(2) << '\n';
    std::cout << cube(10) << '\n';

    std::cout << sign(-1.2) << '\n';
    std::cout << sign(0.0) << '\n';
    std::cout << sign(3.14) << '\n';

    std::cout << sum(3) << '\n';
    std::cout << sum(10) << '\n';
    printHelloWorld(42);
    print42();
    return 0;
}

void print42()
{
    std::cout << "here's 42 for you ....\n";
}

void printHelloWorld(int x)
{
    std::cout << "hello world ... " << x << " received ...\n";
}

int sum(int n)
{
    int s = 0;
    for (int i = 0; i <= n; ++i)
    {
        s += i;
    }
    return s;
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
