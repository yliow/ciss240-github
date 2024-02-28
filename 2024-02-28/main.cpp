#include <iostream>
#include <iomanip>

int main()
{
    // int i = 42;
    // std::cout << i << '\n';
    // i = i + 1;
    // std::cout << i << '\n';

    // i = 42;
    // std::cout << i << '\n';
    // ++i;
    // std::cout << i << '\n';
    
    // i = 42;
    // std::cout << i << '\n';
    // i++;
    // std::cout << i << '\n';
    
    // i = 42;
    // std::cout << i << '\n';
    // i += 1;
    // std::cout << i << '\n';

    // for (int i = 10; i > 3; i -= 2)
    // {
    //     std::cout << i << '\n';
    // }

    // for (int i = 0; i < 1000; ++i)
    // {
    //     std::cout << "entering block\n";
    //     std::cout << "i:" << i << '\n';
    //     std::cout << "exiting this block...\n";
        
    // }

    // std::cout << std::setw(10) << "n"
    //           << std::setw(10) << "n^2" << '\n';
   
    // std::cout << std::setw(10) << "---"
    //           << std::setw(10) << "---" << '\n';
   
    // for (int i = 0; i < 1000; ++i)
    // {
    //     std::cout << std::setw(10) << i
    //               << std::setw(10) << i * i << '\n';
    // }
    

    // int start, end;
    // std::cin >> start >> end;
    
    // std::cout << std::setw(10) << "n"
    //           << std::setw(10) << "n^2" << '\n';
   
    // std::cout << std::setw(10) << "---"
    //           << std::setw(10) << "---" << '\n';
   
    // for (int i = start; i <= end; ++i)
    // {
    //     std::cout << std::setw(10) << i
    //               << std::setw(10) << i * i << '\n';
    // }

    // for (double x = 3.1; x < 7.2; x += 0.1)
    // {
    //     std::cout << x << '\n';
    // }

    // int start, end;
    // std::cin >> start >> end;
    
    // std::cout << std::setw(10) << "n"
    //           << std::setw(10) << "n^2" << '\n';
   
    // std::cout << std::setw(10) << "---"
    //           << std::setw(10) << "---" << '\n';
   
    // for (int i = start; i <= end; ++i)
    // {
    //     std::cout << std::setw(10) << i
    //               << std::setw(10) << i * i * i << '\n';
    // }

    // int i = 0;
    // for (i = 0; i < 3; ++i)
    // {
    //     std::cout << i + 1 << '\n';
    // }

    // std::cout << "after ... " << i << '\n';

    // // compute 1 + 2 + ... + 5
    // int s = 0;
    // for (int i = 1; i <= 100; ++i)
    // {
    //     s = s + i;
    //     std::cout << i << ": " << s << '\n';
    // }
    // std::cout << "s:" << s << '\n';

    // compute 1*1 + ... + 5*5
    // int s = 0;
    // for (int i = 1; i <= 20; ++i)
    // {
    //     s += i * i;
    //     std::cout << i << ' ' << i * i << ' ' << s << '\n';
    // }
    // std::cout << s << '\n';


    // sum of reciprocals of squares
    // try with int i
    double s = 0.0;
    for (double i = 1.0; i <= 5.0; i = i + 1)
    {
        s = s + 1 / (i * i);
        std::cout << i << ' ' << s << '\n';
    }
    std::cout << s << '\n';
    return 0;
}
