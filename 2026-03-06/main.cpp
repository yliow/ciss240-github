#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    // srand((unsigned int) time(NULL));
    
    // int a[3] =  {4, 2, 42};
    // // a[0] = 4;
    // // a[1] = 2;
    // // a[2] = 42;
    // std::cout << a[0]  << '\n';
    // int x = a[1];
    // std::cout << x << '\n';

    // // a = {-1, -2, -3}; WRRONG!!!

    // int sum = a[0] + a[1] + a[2];
    // std::cout << sum << '\n';

    // double b[4];
    // b[0] = 3.1;
    // b[1] = 3.14;
    // b[2] = 3.141;
    // b[3] = 3.1415;
    // double avg = (b[0] + b[1] + b[2] + b[3])/ 4;
    // std::cout << avg << '\n';

    // bool prime[5];
    // // prime[i] = true exactly when i is a prime
    // prime[0] = false;
    // prime[1] = false;
    // prime[2] = true;
    // prime[3] = true;
    // prime[4] = false;

    // int c[3];
    // std::cout << c[0] << ' ' << c[1] << ' ' << c[2]
    //           << '\n';

    // int d[3] = {4};
    // std::cout << d[0] << ' ' << d[1] << ' ' << d[2]
    //           << '\n';

    // const int size = 3;
    // int e[size] = {0};
    // std::cout << e[0] << ' ' << e[1] << ' ' << e[2]
    //           << '\n';

    // double f[] = {1.1, 2.2, 3.3, 4.4}; // size auto set to 4
    // std::cout << f[4] << '\n';

    // double g[4];
    // //g = f;

    // std::cout << a[0] << '\n';
    // std::cout << a << '\n';

    // int i = 0;
    // std::cout << a[i] << '\n';
    // std::cout << a[i + 1] << '\n';

    // // std::cout << f[0] << '\n';
    // // std::cout << f[1] << '\n';
    // // std::cout << f[2] << '\n';
    // // std::cout << f[3] << '\n';
    
    // for (int i = 0; i < 4; ++i)
    // {
    //     std::cout << f[i] << '\n';
    // }


    // const int SIZE = 5;
    // // std::cin >> size;
    // int h[SIZE]; // WRONG size must be constant


    // int p = 42;
    // std::cout << sizeof(p) << '\n';
    // std::cout << sizeof(int) << '\n';
    // std::cout << sizeof(float) << '\n';
    // std::cout << sizeof(double) << '\n';
    // int q[10];
    // std::cout << sizeof(q) << '\n';
    // std::cout << sizeof(q) / sizeof(int) << '\n';
  

    // int u[3] = {5, 3, 1};
    // int v[3];
    // // v = u
    // for (int i = 0; i < 3; ++i)
    // {
    //     v[i] = u[i];
    // }
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << v[i] << ' ';
    // }
    // std::cout << '\n';


    // const int N = 10;
    // int dice[N];
    // for (int i = 0; i < N; ++i)
    // {
    //     dice[i] = rand() % 6 + 1;
    // }
    // for (int i = 0; i < N; ++i)
    // {
    //     std::cout << dice[i] << ' ';
    // }
    // std::cout << '\n';

    // double j[10];
    // for (int i = 0; i < 10; ++i)
    // {
    //     j[i] = double(rand()) / RAND_MAX * 5.0;
    // }
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << j[i] << ' ';
    // }
    // std::cout << '\n';
    // // running max
    // double max = j[0];
    // std::cout << 0 << ' ' << j[0] << ' ' << max << '\n';
    // for (int i = 1; i < 10; ++i)
    // {
    //     if (j[i] > max)
    //     {
    //         max = j[i];
    //     }
    //     std::cout << i << ' ' << j[i] << ' ' << max << '\n';
    // }
    // std::cout << max << '\n';

    // double s = 0.0;
    // for (int i = 0; i < 10; ++i)
    // {
    //     s += j[i];
    //     std::cout << i << ' ' << j[i] << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';


    char x[] = {'h', 'e', 'l', 'l', 'o'};
    char target;
    std::cin >> target;

    //bool found = false;
    int index = -1;
    // for forward linear srch for (int i = 0; i < 5; ++i)
    for (int i = 4; i >= 0; --i)
    {
        if (x[i] == target)
        {
            //found = true;
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        std::cout << target << " not found\n";
    }
    else
    {
        std::cout << target << " found at "
                  << index << ". Check value: " << x[index] << '\n';
    }

    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (x[i] == target)
        {
            ++count;
        }
    }
    std::cout << count << '\n';
    
    return 0;
}
