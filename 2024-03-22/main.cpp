#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

bool isprime(int n)
{
    bool isprime_ = true;
    for (int d = 2; d <= sqrt(n); ++d)
    {
        if (n % d == 0)
        {
            isprime_ = false;
            break;
        }
    }
    return isprime_;
}

int main()
{
    srand((unsigned int) time(NULL));
    // char x[] = {'h', 'e', 'l', 'l', 'o'};
    // char target;
    // std::cin >> target;

    // bool found = false;
    // for (int i = 0; i < 5; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         std::cout << i << " ... found it\n";
    //         found = true;
    //         break;
    //     }
    //     std::cout << i << " ... not found yet\n";
    // }

    // std::cout << found << '\n';

    // char x[] = {'h', 'e', 'l', 'l', 'o'};
    // char target;
    // std::cin >> target;

    // int index = -1;
    // for (int i = 0; i < 5; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         std::cout << i << " ... found it\n";
    //         index = i;
    //         break;
    //     }
    //     std::cout << i << " ... not found yet\n";
    // }

    // std::cout << index << '\n';


    // count computation page 12
    // int x[20];
    // for (int i = 0; i < 20; ++i)
    // {
    //     x[i] = rand() % 8;
    // }
    // for (int i = 0; i < 20; ++i)
    // {
    //     std::cout << x[i] << ' ';
    // }
    // std::cout << '\n';
    // int target;
    // int count = 0;
    // std::cin >> target;
    // for (int i = 0; i < 20; ++i)
    // {
    //     if (x[i] == target)
    //     {
    //         ++count;
    //     }
    //     std::cout << i << ' ' << x[i] << ' ' << count << '\n';
    // }
    // std::cout << count << '\n';

    // array of prime values
    const int N = 100;
    int prime[N];

    // check if n is prime
    int n = 10;
    std::cout << (isprime(n) ? "prime\n" : "not prime\n");

    // array of booleans where prime[i] is true if i is prime
    return 0;
}
