// #include <iostream>
// #include <cstdlib>// for rand() and srand()
// #include <ctime> // for time

// int main()
// {
//     // int x = 0;
//     // if (x < 0)
//     // {
//     //     if (x == -2)
//     //     {
//     //         std::cout << "1\n";
//     //     }
//     // }
//     // else
//     // {
//     //     std::cout << "2\n";
//     // }

//     srand((unsigned int) time(NULL));
//     int x = rand() % 10 + 90;
//     int y = rand() % 10 + 90;
//     int answer = x * y;
//     std::cout << "What is the product of " << x << " and "
//               << y << "? ";
//     int guess;
//     std::cin >> guess;

//     int score = 0;
    
//     if (guess == answer)
//     {
//         std::cout << "You smart dawg!\n";
//         score = 2;
//     }
//     else 
//     {
//         if (guess < answer)
//         {
//             std::cout << "Too low!\n";
//         }
//         else
//         {
//             std::cout << "Too high!\n";
//         }
//             std::cout << "What is the product of " << x << " and "
//                       << y << "? "; 
//             std::cin >> guess;
            
//             if (guess == answer)
//             {
//                 score = 1;
//             }
//             else
//             {
//                 score = 0;
//             }
//     }
//         std::cout << "score:" << score << '\n';
//         return 0;
// }

// #include <iostream>

// int main()
// {
//     int x0 = 5, x1 = 3, x2 = 5, x3 = 6;
//     int count = 0;
//     int target = 5;
    
//     if (x0 == target)
//     {
//         count = count + 1;
//     }
//     std::cout << count << '\n';
//     if (x1 == target)
//     {
//         count = count + 1;
//     }
//     std::cout << count << '\n';
//     if (x2 == target)
//     {
//         count = count + 1;
//     }
//     std::cout << count << '\n';
//     if (x3 == target)
//     {
//         count = count + 1;
//     }
//     std::cout << count << '\n';
    
//     return 0;
// }

#include <iostream>

int main()
{
    // int x = 6;
    // std::cout << (x == 5 ? 42 : 0) << '\n';
    srand((unsigned int) time(NULL));
    int die = rand() % 6 + 1;
    std::cout << die << '\n';
    if (die == 6)
    {
        std::cout << "win!\n";
    }
    else
    {
        std::cout << "lose\n";
    }
    std::cout << (die == 6 ? "win\n" : "lose\n");
    
    return 0;
}
