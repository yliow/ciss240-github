#include <iostream>
#include <ctime>
#include <cstdlib>

void bubblesort(int x[], int n);
void randarray(int x[], int n);
void printarray(int x[], int n);
int binsrch(int x[], int n, int target);

    
int main()
{
    char s[100] = {'h', 'e', 'l', 'l', 'o', ' ',
                   'w', 'o', 'r', 'l', 'd', '\0', 'A'}; // "hello world";
    std::cout << s << '\n';
    std::cout << s[12] << '\n';
    return 0;

    
    srand((unsigned int) time(NULL));
    const int SIZE = 1000000;
    int x[SIZE];
    randarray(x, SIZE);
    printarray(x, SIZE);
    bubblesort(x, SIZE);
    printarray(x, SIZE);
    
    std::cout << "binary srch\n";
    int target;
    std::cin >> target;
    int index = binsrch(x, SIZE, target);
    std::cout << index << '\n';


    

    return 0;
}

void bubblesort(int x[], int n)
{
    for (int j = n - 2; j >= 0; --j)
    {
        //std::cout << "\nj:" << j << '\n';
        for (int i = 0; i <= j; ++i)
        {
            //std::cout << "i:" << i << '\n';
            //printarray(x, SIZE);
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
            //printarray(x, n);
        }
    }
}

void randarray(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % 20;
    }
    return;
}

void printarray(int x[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    return;
}


int binsrch(int x[], int n, int target)
{
    int lower, upper;
    lower = 0;
    upper = n - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        if (x[mid] == target)
        {
            //std::cout << "SUCCESS "
            //          << lower << ' ' << mid << ' ' << upper << '\n';
            return mid;
        }
        else if (x[mid] > target)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
        //std::cout << lower << ' ' << mid << ' ' << upper << '\n';
    }
    return -1;
}
