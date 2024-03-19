/*


 */

/*
 This is how it works ....


*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double s = 0.0;
    double s1 = -1000; // s1 is the value of s in the previous iteration
    double error;
    std::cin >> error;
    int i = 1;
    
    while (1)
    {
        s += 1.0 / (i * i);
        std::cout << i << ' ' << std::setprecision(20) << s << '\n';
        if (fabs(s - s1) < error) break;

        // increment i for next iteration
        ++i;
        s1 = s;
    }
    std::cout << "final s:" << std::setprecision(20) << s << '\n';
    return 0;
}
