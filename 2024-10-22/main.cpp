#include <iostream>

int main()
{
    double a, b;
    int num_points; // or n
    std::cin >> a >> b >> num_points;

    double dx = (b - a) / (num_points - 1);
    for (double x = a; x <= b; x += dx)
    {
        std::cout << x << '\n';
    }
    
    return 0;
}
