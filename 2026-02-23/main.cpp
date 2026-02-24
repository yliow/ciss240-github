#include <iostream>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;
    int a, b, c, d;

    const int M = 100;
    bool deepbreak = false;
    for (int a = -M; a <= M; ++a)
    {
        for (int b = -M; b <= M; ++b)
        {
            for (int c = -M; c <= M; ++c)
            {
                for (int d = -M; d <= M; ++d)
                {
                    if (A == a * c && B == a * d + b * c && C = b * d)
                    {
                        std::cout << A << "x^2 + "
                                  << B << "x + "
                                  << C << " = "
                                  << "(" << a << "x + "
                                  << b << ") * ("
                                  << c << "x + " << d
                                  << '\n';
                        deepbreak = true;
                        break;
                    }
                }
                if (deepbreak)
                {
                    break;
                }
            }
            if (deepbreak)
            {
                break;
            }
        }
    }
    
    
    return 0;
}
