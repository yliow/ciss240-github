#include <iostream>
#include <iomanip>

int main()
{
    int w, m, n;
    std::cin >> w >> m >> n;
    std::cout << std::setw(w) << std::setfill('*') << m << ' '
              << std::setw(w) << std::setfill('?') << n << '\n';
    
    return 0;
}
