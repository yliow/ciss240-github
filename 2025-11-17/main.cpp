#include <iostream>
#include <cmath>

int main()
{
    /* CHECK LAST EXAMPLE OF CHAP 14
    int i = 1;
    double s = 0.0;
    wihle (?)
    {
        double term = 1.0 / (double(i) * i);
        s += term; // s is 1/1^2 + ... + 1/i^2 current approximation
        std::cout << i << ' ' << term << ' ' << s << '\n';

        double next_term = 1.0 / ((i + 1) * (i + 1));
        double next_s = s + next_term;

        if (fabs(s - next_s) < 0.0001) // i.e., break if consec approx diff by less than 0.0000*
        {
            break;
        }

        // for the next iteration
        ++i;
    }
    std::cout << "final s: " << s << '\n';
    */

    // yoo hoo

    // The following is a hello world
    // program.
    // It prints "hello world" with
    // a newline.
        
    //d::cout << "hello world\n";

    // int x = 1;
    // if (x == 1)
    // {
    //     int y = 42;
    //     std::cout << y << '\n';
    // } // y is destroyed here
    
    // //std::cout << y << '\n';
    // std::cout << x << '\n';

    int x = 0, y = 0;
    if (x == 0)
    {
        int a = 5;
        std::cout << a << '\n';
        if (y == 0)
        {
            int a = 6;
            std::cout << a << '\n';
        }
        std::cout << a << '\n';
    }
    return 0;
}
