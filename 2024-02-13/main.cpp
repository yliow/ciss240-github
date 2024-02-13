#include <iostream>

int main()
{
    // std::cout << "what's your favorite number? ";
    // int n;
    // std::cin >> n;

    // if (n != 42) // n is not 42
    // {
    //     std::cout << "you don't like 42?!?\n";
    // }

    // int age;
    // std::cin >> age;

    // if (age < 18)
    // {
    //     std::cout << "You're lying! Think you can fool me???\n";
    // }

    // int x0, x1;
    // std::cin >> x0 >> x1;

    // if (x0 > x1)
    // {
    //     std::cout << "First is bigger\n";
    // }

    int m, d, h, w;
    std::cin >> m >> d >> h >> w;
    int days_to_dob = (m - 1) * 30 + d;
    int height_weight = h + w;
    if (days_to_dob > height_weight)
    {
        std::cout << "powerball\n";
    }
    
    return 0;
}
