#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) time(NULL));
    // int s = 0;
    // int i = 1;

    // s += i;
    // ++i;

    // s += i;
    // ++i;

    // s += i;
    // ++i;

    // for (int i = 1; i <= 3;)
    // {
    //     s += i;
    //     ++i;
    // }

    // int x, y, z;
    // std::cin >> x;
    // std::cin >> y;
    // std::cin >> z;

    // int x0, x1, x2;
    // std::cin >> x0;
    // std::cin >> x1;
    // std::cin >> x2;

    /*
           +---+
         i | 0 |
           +---+
            x[0]  x[1]  x[2]
           +-----+-----+-----+
         x | 42  | 43  | 44  |
           +-----+-----+-----+
     */
    int i = 0;
    int x[3]; // x is an integer "array"
    std::cout << x[0] << '\n';
    std::cout << x[1] << '\n';
    std::cout << x[2] << '\n';

    //i = 1;
    //std::cout << x[i] << '\n';

    for (int i = 0; i < 3; ++i)
    {
        std::cin >> x[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        std::cout << x[i] << '\n';
    }
    
    int y[100];
    for (int i = 0; i < 100; ++i)
    {
        //std::cin >> y[i];
    }

    bool prime[10];
    // prime[i] is true if i is a prime
    prime[0] = false;
    prime[1] = false;
    prime[2] = true;
    prime[3] = true;
    prime[4] = false;
    prime[5] = true;
    prime[6] = false;
    prime[7] = true;
    prime[8] = true;
    prime[9] = false;
    
    double b[4] = {3.1, 3.14, 3.141, 3.1415};
    for (int i = 0; i < 4; ++i)
    {
        std::cout << b[i] << '\n';
    }
    
    int c[5] = {2, 3};
    for (int i = 0; i < 5; ++i)
    {
        std::cout << c[i] << '\n';
    }

    int q[] = {1, 3, 5, 7, 9};
    // if no size, then size is computed by g++ using
    // the initializer list
    for (int i = 0; i < 5; ++i)
    {
        std::cout << q[i] << '\n';
    }
    std::cout << q[5] << '\n'; // WRONG!!!!!!
    std::cout << q[-1] << '\n'; // WRONG!!!!!!

    int r[1000000];
    for (int i = 0; i < 1000000; ++i)
    {
        r[i] = rand() % 6 + 1;
    }
    for (int i = 0; i < 1000000; ++i)
    {
        //std::cout << r[i] << '\n';
    }
    int s = 0;
    for (int i = 0; i < 1000000; ++i)
    {
        s += r[i];
    }
    std::cout << s / 1000000.0 << '\n';
    return 0;
}
