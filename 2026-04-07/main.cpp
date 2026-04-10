#include <iostream>

int sum_of_digits(int num)
{
    int s = 0;
    while (num != 0)
    {
        s += num % 10;
        num /= 10;
    }
    return s;
}

int addDigits(int num)
{
    while (num >= 10)
    {
        // replace num by the sum of digits of num
        num = sum_of_digits(num);
    }
    return num;
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << addDigits(x) << '\n';
    
    return 0;
}
