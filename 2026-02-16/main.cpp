#include <iostream>

int main()
{
    // int n, r;
    // std::cin >> n >> r;

    // // compute n! store in nfact
    // int nfact = 1;
    // for (int i = 1; i <= n; ++i)
    // {
    //     nfact = nfact * i;
    //     std::cout << i << ' ' << nfact << '\n';
    // }
    // std::cout << nfact << '\n';

    // // compute r! store in rfact
    // int rfact = 1;
    // for (int i = 1; i <= r; ++i)
    // {
    //     rfact = rfact * i;
    //     std::cout << i << ' ' << rfact << '\n';
    // }
    // std::cout << rfact << '\n';

    // // compute (n - r)! store in nrfact
    // int nrfact = 1;
    // for (int i = 1; i <= n - r; ++i)
    // {
    //     nrfact = nrfact * i;
    //     std::cout << i << ' ' << nrfact << '\n';
    // }
    // std::cout << nrfact << '\n';

    // // compute n-choose-r store in nchooser.
    // int nchooser = nfact / (rfact * nrfact);
    // std::cout << nchooser << '\n';

    // int x;
    // int m;

    // std::cin >> x;
    // m = x;
    // std::cout << x << ' ' << m << '\n';

    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cin >> x;
    //     if (x > m)
    //     {
    //         m = x;
    //     }
    //     std::cout << x << ' ' << m << '\n';
    // }
    // std::cout << m << '\n';

    // equally spaced points where n = number of points
    // double a, b;
    // int n;
    // std::cin >> a >> b >> n;

    // double x = a;
    // std::cout << x << '\n';
    // double dx = (b - a) / (n - 1);
    // for (int i = 1; i < n; ++i)
    // {
    //     x += dx;
    //     std::cout << x << '\n';
    // }


    // area under y = x^2 given endpoints a, b, n = number of
    // points

    double a, b;
    int n;
    std::cin >> a >> b >> n;
    double dx = (b - a) / (n - 1);
    double A = 0.0;
    double x = a;
    for (int i = 1; i < n; ++i)
    {
        double y = x * x;
        double dA = y * dx;
        A += dA;
        std::cout << x << ' ' << dA << ' ' << A << '\n';
        
        // this new x is for the NEXT iteration
        x += dx;
    }
    return 0;
}
