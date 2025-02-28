#include <iostream>


int pow_of_2(int n)
{
    int p = 1;
    for (int i = 1; i <= n; ++i)
    {
        int term = 2;
        p *= term;
        //std::cout << i << ' ' << p << '\n';
    }
    return p;
}

double pow_of_n(double x, int n)
{
    int positive_n = (n >= 0 ? n : -n);
        
    double p = 1;
    for (int i = 1; i <= positive_n; ++i)
    {
        p *= x;
    }
    return (n >= 0 ? p : 1.0 / p);
}

int main()
{
    // int m;
    // std::cin >> m;

    // int q = pow_of_2(m);
    
    // std::cout << q << '\n';

    double x;
    std::cin >> x;
    int n;
    std::cin >> n;
    double p = pow_of_n(x, n);
    std::cout << p << '\n';
    
    return 0;
}
