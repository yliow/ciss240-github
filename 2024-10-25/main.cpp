#include <iostream>
#include <cmath>

int main()
{
    /*
    // area of y = sin(x) from x=0, x=pi/2
    double a, b;
    std::cin >> a >> b;
    int n; // n is number of intervals
    std::cin >> n; 

    double dx = (b - a) / n;
    double x = a;
    double A = 0;
    for (int i = 0; i < n; ++i)
    {
        double dA = sin(x) * dx;
        A += dA;
        std::cout << x << ' ' << A << '\n';

        x += dx;
    }
    std::cout << "final A:" << A << '\n';
    */

    /*
    double a, b;
    int n; // number of POINTS
    std::cin >> a >> b >> n;

    double x = a;
    double dx = (b - a) / (n - 1);
    double max = x * x * sin(x);
    double max_x = x;
    for (int i = 0; i < n; ++i)
    {
        double y = x * x * sin(x);
        if (y > max)
        {
            max = y;
            max_x = x;
        }
        std::cout << x << ' ' << y << ' ' << max << '\n';

        x += dx;
    }
    std::cout << "final max:" << max << " at " << max_x << '\n';
    */

    // text based adventure game from 80s

    const int KITCHEN = 0;
    const int LIVINGROOM = 1;
    const int BEDROOM = 2;
    
    int player_room = KITCHEN;
    char input;

    switch (player_room)
    {
        case KITCHEN:
            std::cout << "you are in the kitchen\n";
            std::cout << "options: n or e\n";
            std::cout << "input: ";
            std::cin >> input;
            break;
    }
    
    return 0;
}
