#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int addr[100000];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> addr[i];
    }

    // solve using brute force
    int min_d = -1;
    int min_i;
    for (int i = 0; i < n; ++i)
    {
        // measure total distance travelled to addr[i]
        int d = 0;
        for (int j = 0; j < n; ++j)
        {
            int t = addr[j] - addr[i];
            t = (t < 0 ? -t : t);
            d += t;
        }
        if (min_d == -1) // this is the first d value
        {
            min_d = d;
            min_i = 0;
        }
        else // this d is past the first d computation
        {
            if (d < min_d)
            {
                min_d = d;
                min_i = i;
            }
        }
    }
    std::cout << min_i << '\n';
    return 0;
}
