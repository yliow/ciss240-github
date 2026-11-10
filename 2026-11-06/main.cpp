#include <iostream>
#include <cmath>

int main()
{
    // int n;
    // std::cin >> n;

    // // primality check
    // bool is_prime = true;

    // if (n == 0 || n == 1)
    // {
    //     is_prime = false;
    // }
    // else
    // {
    //     for (int d = 2; d <= sqrt(n); ++d)
    //     {
    //         if (n % d == 0)
    //         {
    //             is_prime = false;
    //             break;
    //         }
    //     }
    // }
    
    // if (is_prime)
    // {
    //     std::cout << "prime\n";
    // }

    // solve x^3 = 729 for integer x
    // for (int x = 0; x < 1000; ++x)
    // {
    //     if (x * x * x == 729)
    //     {
    //         std::cout << "solution: " << x << '\n';
    //     }
    // }

    // x^2 + y^2 = 5^2
    // for (int x = 0; x <= 5; ++x)
    // {
    //     for (int y = 0; y <= 5; ++y)
    //     {
    //         if (x * x + y * y == 5 * 5)
    //         {
    //             std::cout << x << ' ' << y << '\n';
    //         }
    //     }
    // }

    // factorize ax^2 + bx + c
    int a, b, c;
    std::cin >> a >> b >> c;
    for (int A = -100; A <= 100; ++A)
    {
        for (int B = -100; B <= 100; ++B)
        {
            for (int C = -100; C <= 100; ++C)
            {
                for (int D = -100; D <= 100; ++D)
                {
                    if (A * C == a &&
                        A * D + B * C == b &&
                        B * D == c)
                    {
                        std::cout << a << "x^2 + "
                                  << b << "x + "
                                  << c << " = "
                                  << '(' << A << "x + " << B << ") * ("
                                  << C << "x + " << D << ")\n";
                    }
                }
            }
        }
    }
    
    return 0;
}
