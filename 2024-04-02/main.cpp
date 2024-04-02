#include <iostream>
#include <cstdlib>
#include <ctime>

// print array: print the array y up to index 9
void print_array(int y[])
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << y[i] << ' ';
    }
    std::cout << '\n';
    return;
}

// rand_array
// randomize z[0],...,z[9] with ints in 0..19
void rand_array(int z[])
{
    for (int i = 0; i < 10; ++i)
    {
        z[i] = rand() % 10000;
    }
    return;
}

// linearsearch
int linearsearch(int w[], int target)
{
    int index = -1;
    for (int i = 0; i < 10; ++i)
    {
        if (w[i] == target)
        {
            index = i;
            break;
        }
    }
    return index;
}


    
int main()
{
    const int N = 10000;
    int x[N];
    rand_array(x);
//    print_array(x);

    // int target;
    // std::cin >> target;

    // int index = linearsearch(x, target);
    // std::cout << "index: " << index << '\n';

    // bubblesort
    for (int i = N - 2; i >= 0; --i)
    {
        // pass

        for (int j = 0; j <= i; ++j)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
            //print_array(x);
        }
    }

    //print_array(x);

    // int target;
    // std::cin >> target;

    for (int test = 0; test < 1000000; ++test)
    {
        target = rand() % 1000;
        int left = 0;
        int right = N - 1;
        int index = -1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (x[mid] == target)
            {
                index = mid;
                break;
            }
            else if (x[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        //std::cout << index << '\n';
    }
    return 0;
}
