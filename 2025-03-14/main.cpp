#include <iostream>

int main()
{
    // for (int x = 0; x <= 13; ++x)
    // {
    //     for (int y = x; y <= 13; ++y)
    //     {
    //         if (x * x + y * y == 13 * 13)
    //         {
    //             std::cout << x << ' ' << y << '\n';
    //         }
    //     }
    // }

    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a << "x^2 + " << b << "x + " << c << " = " << '\n';


    for (int A = -100; A <= 100; ++A)
    {
        for (int B = -100; B <= 100; ++B)
        {
            for (int C = -100; C <= 100; ++C)
            {
                for (int D = -100; D <= 100; ++D)
                {
                    if (A * C == a
                        && A * D + B * C == b
                        && B * D == c)
                    {
                        std::cout << '(' << A << "x + " << B << ")* "
                                  << '(' << C << "x + " << D << ")\n";
                    }
                }
            }
            
        }
    }

    return 0;
}
