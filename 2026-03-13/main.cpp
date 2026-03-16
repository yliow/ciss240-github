#include <iostream>
#include <cmath>

/*
     x ---> square ---- > x*x
 */

int square(int x)
{
    int ret = x * x;
    return ret;
}

/*
  x -----> isprime -----> true iff x is prime
 */
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
        return true;
    }
}


int main()
{
    // for (int i = 0; i < 10; ++i)
    // {
    //     std::cout << i << ' ' <<  square(i) << '\n';
    // }
    // return 0;

    // for (int n = 0; n < 20; ++n)
    // {
    //     std::cout << n << ' ' << isprime(n) << '\n';
    // }
    // return 0;
    
    // const int n = 10000;
    // int prime[n];
    // int p = 2;
    // for (int i = 0 ; i < n; ++i)
    // {
    //     // put the next prime >= p value into p
    //     while (!isprime(p))
    //     {
    //         ++p;
    //     }
    //     prime[i] = p;
    //     ++p;
    // }

    // for (int i = 0; i < n; ++i)
    // {
    //     std::cout << prime[i] << ' ';
    // }
    // std::cout << '\n';

    // const int n = 100;
    // bool prime[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     prime[i] = isprime(i);
    // }
    // // for (int i = 0; i < n; ++i)
    // // {
    // //     std::cout << i << ' ' << prime[i] << '\n';
    // // }
    // for (int i = 0; i < n; ++i)
    // {
    //     if (prime[i])
    //     {
    //         std::cout << i << ' ';
    //     }
    // }
    // std::cout << '\n';

    // running max
    // int x[] = {8, 2, 6, 7, 4, 5, 3, 9, 12, 0};
    // int n = sizeof(x) / sizeof(int);
    // int m;
    // int max_index;
    
    // m = x[0];
    // max_index = 0;
    // for (int i = 1; i < n; ++i)
    // {
    //     if (x[i] > m)
    //     {
    //         m = x[i];
    //         max_index = i;
    //     }
    //     std::cout << i << ' ' << x[i] << ' ' << m << ' ' << max_index << '\n';
    // }
    // std::cout << m << ' ' << max_index << '\n';

    // int s = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     s += x[i];
    // }

    // char x[11] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    // char target;
    // std::cin >> target;
    // int index = -1;
    // int count = 0;
    // for (int i = 0 ; i < 11; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         // index = i;
    //         // break;
    //         ++count;
    //     }
    // }
    // // std::cout << index << '\n';
    // std::cout << count << '\n';

    // bubblesort
    int x[10] = {6, 8, 2, 4, 1, 3, 9, 7, 0, 5};

    int n = 10;
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
            for (int k = 0; k < n; ++k)
            {
                std::cout << x[k] << ' ';
            }
            std::cout << '\n';
        }
        
    }

    // binary srch
    int index = -1;
    int lower = 0;
    int upper = n - 1;
    while (lower > upper)
    {
        int mid = (lower + upper) / 2;
        if (x[mid] == target)
        {
            index = mid;
            break;
        }
        else if (x[mid] > target)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    
    return 0;
}
