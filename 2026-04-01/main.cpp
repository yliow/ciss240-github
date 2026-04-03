#include <iostream>
#include <cstdlib>

void mamama();

double max(double x, double y)
{
    return (x >= y ? x : y);
}

double clip(double min, double max, int x)
{
    if (x <= min) return min;
    else if (x >= max) return max;
    else return x;
}

char letterGrade(double A, double B, double C, double D,
                 double grade)
{
    if (grade >= A) return 'A';
    else if (grade >= B) return 'B';
    else if (grade >= C) return 'C';
    else if (grade >= D) return 'D';
    else return 'F';   
}

double randunit()
{
    return double(rand()) / RAND_MAX;
}

double randdouble(double min, double max)
{
    return randunit() * (max - min) + min;
}

int randrange(int a, int b)
{
    return rand() % (b - a) + a;
}

char getYorN()
{
    char c = ' ';
    while (c != 'y' && c != 'n')
    {
        std::cout << "Yes or no (y/n)? ";
        char c;
        std::cin >> c;
    }
    return '?';
}

void swap(int & x, int & y)
{
    int t = x;
    x = y;
    y = t;
}


void f(int & x)
{
    x = 42;
}


int main()
{
    mamama();
    // std::cout << max(5, 3) << '\n';
    // std::cout << max(3, 5) << '\n';
    // std::cout << max(5, 5) << '\n';
    // std::cout << clip(0., 0.25, 1.0) << '\n';
    // std::cout << clip(0.0, 1.0, -1.2) << '\n';
    // std::cout << clip(0.0, 5.25, 1.0) << '\n';
    // std::cout << letterGrade(90.5, 86.5, 79.6, 70, 87) << '\n';

    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << randunit() << '\n';
    // }
    
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << randdouble(-1.0, 2.0) << '\n';
    // }

    // for (int i = 0; i < 30; ++i)
    // {
    //     std::cout << randrange(5, 14) << '\n';
    // }

    // char answer = getYorN();
    // std::cout << answer << '\n';

    // int y = -1;
    // f(y);
    // std::cout << y << '\n';

    int a = 0, b = 999;
    std::cout << a << ' ' << b << '\n';
    swap(a, b);
    std::cout << a << ' ' << b << '\n';
    
    return 0;
}

void mamama()
{
    std::cout << "!!!\n";
}
