#include <iostream>

void init(int ca[], int n)
{
    for (int i = 0; i < 2 * n + 1; ++i)
    {
        ca[i] = 0;
    }
    ca[n] = 1;
    return;
}

int main()
{
    int ca[2 * 500 + 1];
    int t[2 * 500 + 1];
    int n;
    std::cin >> n;

    init(ca, n);

    // print the ca
    for (int i = 0; i <= 2 * n; ++i)
    {
        std::cout << (ca[i] == 1 ? 'X' : ' ');
    }
    std::cout << '\n';
    
    // compute next generation of ca
    t[0] = ca[0];
    t[2 * n] = ca[2 * n];
    for (int i = 1; i < 2 * n; ++i)
    {
        if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 0)
        {
            t[i] = 0;
        }
        else if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 1)
        {
            t[i] = 1;
        }
        else if (ca[i - 1] == 0 && ca[i] == 1 && ca[i + 1] == 0)
        {
            t[i] = 0;
        }
        else if (ca[i - 1] == 0 && ca[i] == 1 && ca[i + 1] == 1)
        {
            t[i] = 1;
        }
        else if (ca[i - 1] == 0 && ca[i] == 1 && ca[i + 1] == 1)
        {
            t[i] = 1;
        }
        else if (ca[i - 1] == 1 && ca[i] == 0 && ca[i + 1] == 0)
        {
            t[i] = 1;
        }
        else if (ca[i - 1] == 1 && ca[i] == 0 && ca[i + 1] == 1)
        {
            t[i] = 0;
        }
        else if (ca[i - 1] == 1 && ca[i] == 1 && ca[i + 1] == 0)
        {
            t[i] = 1;
        }
        else if (ca[i - 1] == 1 && ca[i] == 1 && ca[i + 1] == 1)
        {
            t[i] = 0;
        }
    }

    // copy t back to ca
    for (int i = 0; i <= 2 * n; ++i)
    {
        ca[i] = t[i];
    }
    
    
    return 0;
}
