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
        z[i] = rand() % 20;
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
    int x[10];
    rand_array(x);
    print_array(x);

    int target;
    std::cin >> target;

    int index = linearsearch(x, target);
    std::cout << "index: " << index << '\n';
    
    return 0;
}
