#include <iostream>
#include <iomanip>

int main()
{
    // for (int i = 0; i < 1000; ++i)
    // {
    //     std::cout << "hello world\n";
    // }

    // // square table
    // int start, end;
    // std::cin >> start >> end;
    // std::cout << std::setw(10) << "n" << std::setw(10) << "n^2\n";
    // std::cout << std::setw(10) << "---" << std::setw(10) << "---\n";
    // for (int n = start; n <= end; ++n)
    // {
    //     std::cout << std::setw(10) << n << std::setw(9) << n * n << "\n";
    // }

    // for (double x = 3.1; x < 7.2; x += 0.1)
    // {
    //     std::cout << x << '\n';
    // }

    std::cout << "begin ... going to waste some cpu cycles ... \n";
    for (int i = 0; i < 1000000; ++i)
    {
        int j = i * i * i * i * i * i;
        for (int k = 0; k < 1000000; ++k)
        {
            int l = i * i * k * k;
        }
    }
    std::cout << "end ... wasted aobut 300 cpu cycles\n";

    return 0;
}
