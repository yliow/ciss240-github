#include <iostream>

int main()
{
    int a[3] =  {4, 2, 42};
    // a[0] = 4;
    // a[1] = 2;
    // a[2] = 42;
    std::cout << a[0]  << '\n';
    int x = a[1];
    std::cout << x << '\n';

    // a = {-1, -2, -3}; WRRONG!!!

    int sum = a[0] + a[1] + a[2];
    std::cout << sum << '\n';

    double b[4];
    b[0] = 3.1;
    b[1] = 3.14;
    b[2] = 3.141;
    b[3] = 3.1415;
    double avg = (b[0] + b[1] + b[2] + b[3])/ 4;
    std::cout << avg << '\n';

    bool prime[5];
    // prime[i] = true exactly when i is a prime
    prime[0] = false;
    prime[1] = false;
    prime[2] = true;
    prime[3] = true;
    prime[4] = false;

    int c[3];
    std::cout << c[0] << ' ' << c[1] << ' ' << c[2]
              << '\n';

    int d[3] = {4};
    std::cout << d[0] << ' ' << d[1] << ' ' << d[2]
              << '\n';

    const int size = 3;
    int e[size] = {0};
    std::cout << e[0] << ' ' << e[1] << ' ' << e[2]
              << '\n';

    double f[] = {1.1, 2.2, 3.3, 4.4}; // size auto set to 4
    std::cout << f[4] << '\n';

    double g[4];
    //g = f;

    std::cout << a[0] << '\n';
    std::cout << a << '\n';

    // a[0] is the 0th value of a
    // but a is the memory location of the values of a
    // can create memory address variable
    // these are called pointer variables
    int * p = a;
    std::cout << a << '\n';
    std::cout << p << '\n';
    
    return 0;
}
