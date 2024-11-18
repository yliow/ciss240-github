#include <iostream>
#include <cstdlib>

int main()
{
    int a[3] = {4, 2, 42};
    // a[0] = 4;
    // a[1] = 2;
    // a[2] = 42;

    std::cout << a[0] << '\n';
    std::cin >> a[1];
    std::cout << a[1] << '\n';

    int i = 2;
    std::cout << a[i] << '\n';
    std::cout << a[i - 1] << '\n';


    std::cout << "without iteration\n";
    std::cout << a[0] << '\n';
    std::cout << a[1] << '\n';
    std::cout << a[2] << '\n';

    std::cout << "with iteration\n";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << a[i] << '\n';
    }
    
    // create random numbers, put into die
    int die[20];
    for (int i = 0; i < 20; ++i)
    {
        die[i] = rand() % 6 + 1;
    }
    for (int i = 0; i < 20; ++i)
    {
        std::cout << die[i] << ' ';
    }
    std::cout << '\n';

    int s = 0;
    for (int i = 0; i < 20; ++i)
    {
        s += die[i];
        std::cout << i << ' ' << s << '\n';
    }
    std::cout << s / 20.0 << '\n';

    double x[] = {1.1, 2.2, 3.3, 4.4};
    for (int i = 0; i < 4; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';

    char y[10] = {'c', 'a', 't'};
    int z[100] = {1, 2, 3};
    for (int i = 0; i < 10; ++i)
    {
        std::cout << z[i] << ' ';
    }
    std::cout << '\n';

    // create an array of 1000 integers value initialize to 0
    int w[1000];
    for (int i = 0; i < 1000; ++i)
    {
        w[i] = 0;
    }
    int u[1000] = {0};


    int v[10];
    const int S = 10;
    int q[S];

    int xx[3] = {2, 3, 5};
    std::cout << xx << '\n';

    int yy[3] = {2, 4, 6};
    std::cout << yy << '\n';
    std::cout << (xx == yy) << '\n';

    bool is_same_array = true;
    for (int i = 0; i < 3; ++i)
    {
        if (xx[i] != yy[i])
        {
            is_same_array = false;
            std::cout << "different at index " << i << '\n';
            break;
        }
        else
        {
            std::cout << "same at index " << i << '\n';
        }
    }
    std::cout << is_same_array << '\n';

    // max computation
    int g[6] = {5, 3, 1, 2, 7, 4};
    int max = g[0];
    int max_index = 0;
    std::cout << 0 << ' ' << g[0] << ' ' << max << ' ' << max_index << '\n';
    
    for (int i = 1; i < 6; ++i)
    {
        if (g[i] > max)
        {
            max = g[i];
            max_index = i;
        }
        std::cout << i << ' ' << g[i] << ' ' << max << ' ' << max_index << '\n';
    }
    std::cout << "max is: " << max << " at index: " << max_index << '\n';

    // linear search algorithm
    char t[] = {'h', 'e', 'l', 'l', 'o'};
    char target;
    std::cin >> target;
    //bool found = false;
    int index = -1;
    for (int i = 0; i < 5; ++i)
    {
        if (t[i] == target)
        {
            //found = true;
            std::cout << target << " found at index " << i << '\n';
            index = i;
            break;
        }
        std::cout << i << ' ' << index << '\n';
    }
    //std::cout << "final found:" << found << '\n';
    std::cout << "final index:" << index << '\n';


    return 0;
}
