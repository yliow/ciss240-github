// lude <iostream>
// #include <cstring>

// int mystrlen(char x[])
// {
//     int i = 0;
//     while (x[i] != '\0')
//     {
//         ++i;
//     }
//     return i;
// }

// void mystrcpy(char x[], char y[])
// {
//     int i = 0;
//     while (i < mystrlen(y))
//     {
//         x[i] = y[i];
//         ++i;
//     }
//     x[i] = '\0';
// }

// void mystrcat(char x[], char y[])
// {
//     // int marker = 0;
//     // for (int i = mystrlen(x); i < mystrlen(x) + mystrlen(y); ++i)
//     // {
//     //     x[i] = y[marker];
//     //     ++marker;
//     // }
//     // x[mystrlen(x)] = '\0';
//     int i = mystrlen(x);
//     int j = 0;
//     while (y[j] != '\0')
//     {
//         x[i] = y[j];
//         ++i;
//         ++j;
//     }
//     x[i] = '\0';
// }

// int atoi(char x[])
// // set p = 1
// // "48123"
// //      ^ -----> ret = 3 * p             ('3' - '0')
// //               p = p * 10
// //     ^  -----> ret = 2 * p + ret
// //               p = p * 10
// //    ^   -----> ret = 1 * p + ret
// //   ^    -----> ret = 8 * p * 10 + ret
// {
//     int ret = 0;
//     int len = mystrlen(x);
//     int p = 1; // p = 10-power
//     for (int i = len - 1; i >= 0; --i)
//     {
//         char c = x[i];
//         ret += (c - '0') * p;
//         p *= 10;
//         std::cout << i << ' ' << c << ' ' << ret << ' ' << p << '\n';
//     }
//     return ret;
// }

// int main()
// {
//     char x[1024] = "hello world\n";
//     std::cout << strlen(x) << '\n';
//     std::cout << mystrlen(x) << '\n';

//     char s[100] = "aaa";
//     char t[100] = "bbb";
//     char u[100];
    
//     mystrcpy(u, s);
//     std::cout << "u:" << u << '\n';
    
//     mystrcat(u, t);
//     std::cout << "u:" << u << '\n';

//     int i = strcmp(u, s);
//     std::cout << i << '\n';

//     // atoi: "135" -> 135
//     // 135   -> "135

//     char v[1024] = "123";
//     int j = atoi(v);
//     std::cout << j << ' ' << j + 1 << '\n';
//     return 0;
// }

#include <iostream>

int square(int x)
{
    return x * x;
}

int main()
{
    std::cout << square(3) << '\n';
    int x = 5;
    std::cout << square(x) << '\n';

    return 0;
}
