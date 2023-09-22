#include <stdio.h>

int main()

//while loop
// {
//     int x;
//     x = 2;

//     while (x <= 20)
//     {
//         printf("%d\n", x);
//         x += 2;
//     }
//     return (0);
// }

//do while loops always execute at least once. they execute the do statement
// {
//     char ch;
//     ch = 'A';

//     do
//     {
//         putchar(ch);
//         ch++;
//     } while (ch != 'Z');
//     putchar('\n');
//     return (0);
// }

// {
//     int x;

//     for (x = 0; x < 10; x++)
//     {
//         printf("%d\n", x);
//     }
//     return (0);
// }

{
    int x;
    for (x = 1; x < 21; x++)
    {
        printf("%d\n", x);
    }

    x = -10;
    while (x < 11)
    {
        printf("%d\n", x);
        x += 2;
    }
    return (0);
}