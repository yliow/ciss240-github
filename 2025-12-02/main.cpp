#include <iostream>

int X = 42;

// function prototypes
void f(int x);
void increment(int & x);
void swap0(int i, int j);


int main()
{
    int x = 42;
    std::cout << "in main ... x:" << x << '\n';
    increment(x);
    std::cout << "in main ... x:" << x << '\n';

    int i = 0, j = 1;
    std::cout << "main ... i,j:" << i << ' ' << j << '\n';
    swap0(i, j);
    std::cout << "main ... i,j:" << i << ' ' << j << '\n';

    int y[10] = {5};
    increment1(y);
    std::cout << y[0] << '\n';

    int k = 99;
    f(k);
    
    return 0;
}


void increment(int & x)
{
    std::cout << "in increment ... x:" << x << '\n';
    ++x ;
    std::cout << "in increment ... x:" << x << '\n';
    return;
}

void swap0(int i, int j)
{
    std::cout << "swap0 ... i,j:" << i << ' ' << j << '\n';
    int t = i;
    i = j;
    j = t;
    std::cout << "swap0 ... i,j:" << i << ' ' << j << '\n';
    return;
}


void swap1(int & i, int & j)
{
    std::cout << "swap0 ... i,j:" << i << ' ' << j << '\n';
    int t = i;
    i = j;
    j = t;
    std::cout << "swap0 ... i,j:" << i << ' ' << j << '\n';
    return;
}


void increment1(int x[])
{
    ++x[0];
}



void f(int x)
{
    std::cout << x << '\n';
}
