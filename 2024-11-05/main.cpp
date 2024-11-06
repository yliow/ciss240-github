#include <iostream>

int main()
{

    std::cout << "solutions to all pythagorus tri with hyp <= 15\n";
    for (int z = 1; z <= 15; ++z)
    {
        for (int x = 1; x <= z; ++x)
        {
            for (int y = x; y <= z; ++y)
            {
                if (x * x + y * y == z * z)
                {
                    std::cout << x << ' ' << y << ' ' << z << '\n';
                }
            }
        }
    }
    return 0;
}
