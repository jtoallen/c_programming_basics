#include <stdio.h>

// int main()
// {
//     float temps[4] = {74.1, 79.2, 73.5, 77.7};
//     int x;

//     printf("The local temp: \n");
//     for (x = 0; x < 4; x++)
//     {
//         printf("Station %d: %.1f\n", x + 1, temps[x]);
//         //the difference between %f and %.1f is that
//         //%f is a float placeholder
//         //%.1f is a float placeholder but it specifies precision wanted is only
//         //to one decimal place
//     }
//     return (0);
// }

// #define MEALS 3
// int main()
// {
//     int calories[MEALS];
//     int x, total;

//     total = 0;
//     puts("Calories Counter");
//     for (x = 0; x < MEALS; x++)
//     {
//         printf("Calories at meal %d: ", x + 1);
//         scanf("%d", &calories[x]); //uses & bc calories[x] returns invidivual val
//         //takes input from user and stores it
//         //in the array called calories at position x.  the first input val will
//         //be stored in 0 because x = 0 to begin. then scanf goes from x = 0 to
//         //x = 2, for a total of 3 values to hold in the array called calories.
//         total = total + calories[x];
//         //calories[x] is retrieving the vals at position x that the scanf
//         //recorded as user input.
//     }
//     printf("You had a total of %d calories.\n", total);
//     return (0);
// }

// int main()
// {
//     char text[] = {"Example of a string"};
//     //this array ends with the null character \0
//     puts(text);

//     return (0);
// }

int main()
{
    char hello[] = "Hello, world \n"; //putchar returns Hello, world
    // char hello[] = "Hello \0, world \n"; //putchar returns Hello
    int n;

    n = 0;
    while (hello[n] != '\0')
    {
        putchar(hello[n]);
        n++;
    }

    return (0);
}