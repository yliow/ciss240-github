#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int nstars = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        //std::cout << i << ' ' << nstars << '\n';
        // i = num spaces
        // nstar = num stars

        // print i spaces
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        // print nstars stars
        for (int j = 0; j < nstars; ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
        
        // for next iteration ...
        nstars += 2;
    }
    
    return 0;
}
