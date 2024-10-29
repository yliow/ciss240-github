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


    // simple game
    /*
    const int KITCHEN = 0;
    const int LIVINGROOM = 1;
    const int BEDROOM = 2;
    
    int player_room = KITCHEN;
    int knive_room = KITCHEN; // rand() % 3
    bool knive_picked = false;
    
    char input;

    int endtime = 10;
    for (int t = 0; t < endtime; ++t)
    {
        std::cout << "time is now " << t << '\n';
        switch (player_room)
        {
            case KITCHEN:
                std::cout << "you are in the kitchen\n";
                std::cout << "options: n or e\n";
                if (knive_room == KITCHEN)
                {
                    if (!knive_picked)
                    {
                        std::cout << "there's a knive\n";
                    }
                }
                std::cout << "input: ";
                std::cin >> input;
                if (input == 'n')
                {
                    player_room = LIVINGROOM;
                }
                else if (input == 'e')
                {
                    player_room = BEDROOM;
                }
                else if (input == 'k')
                {
                    knife_picked = true;
                }
                else 
                {
                    std::cout << "wrong input\n";
                }
                break;
            case LIVINGROOM:
                std::cout << "you are in the livingroom\n";
                std::cout << "options: s or w\n";
                if (knive_room == LIVINGROOM)
                {
                    std::cout << "there's a knive\n";
                }
                std::cout << "input: ";
                std::cin >> input;
                if (input == 's')
                {
                    player_room = BEDROOM;
                }
                else if (input == 'w')
                {
                    player_room = KITCHEN;
                }
                else
                {
                    std::cout << "wrong input\n";
                }
                break;
            case BEDROOM:
                std::cout << "you are in the bedroom\n";
                std::cout << "options: s or w\n";
                if (knive_room == BEDROOM)
                {
                    std::cout << "there's a knive\n";
                }
                std::cout << "input: ";
                std::cin >> input;
                if (input == 's')
                {
                    player_room = LIVINGROOM;
                }
                else if (input == 'n')
                {
                    player_room = KITCHEN;
                }
                else
                {
                    std::cout << "wrong input\n";
                }
                break;
        }
    }
    */


    // find root of sin(x) near 3.
    double a, b;
    std::cin >> a >> b;
    int n; // number of points
    std::cin >> n;
    double dx = (b - a) / (n - 1);

    double min;
    double x_min;
    
    double x = a;
    x_min = a;
    min = fabs(sin(x));
    std::cout << x << ' ' << fabs(sin(x)) << ' ' << min << '\n';

    x += dx;
    for (int i = 2; i <= n; ++i)
    {
        double y = fabs(sin(x));
        if (y < min)
        {
            min = y;
            x_min = x;
        }
        x += dx;
        std::cout << x << ' ' << y << ' ' << min << '\n';
    }
    std::cout << "root is " << x_min << '\n';
    
    return 0;
}
