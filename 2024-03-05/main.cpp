#include <iostream>

int main()
{
    double a, b; // end points of the interval below the area
    int n;       // number of points on [a,b]
    std::cin >> a >> b >> n;

    double dx = (b - a) / (n - 1);
    double A = 0.0;
    double x = a;
    for (int i = 0; i < n - 1; ++i)
    {
        // current i-iteration
        double dA = x * x * dx;
        A += dA;
        //std::cout << i << ' ' << x << ' ' << s << '\n';
        
        // for the next iteration
        x += dx;
    }
    
    std::cout << A << '\n';
    
    return 0;
}
