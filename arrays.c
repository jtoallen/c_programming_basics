#include <stdio.h>

/*
arrays must all hold the same data type.

use square backets listing the number of elements like this when the elements
are not defined:
float temps[3]


use empty square brackets when elements ARE defined:
float temps[] = {0, 1, 2}

After creating the array the SIZE CANNOT be increased.

Un-initliazed arrays contain garbage values from memory.
*/

// int main()
// {
//     int x;
//     float temps[] = {75, 71, 82, 65, 67};

//     printf("The temperatures for the week are: "); // no new line char makes temps print on same line.
//     for (x = 0; x < 5; x++)
//         printf("%.1f ", temps[x]);
//     printf("\n"); // prints new line after the loop is complete.

//     return (0);
// }

#define MEALS 5
int main()
{
    int calories[MEALS];
    int x, total;

    total = 0;
    puts("Calorie Counter");
    for (x = 0; x < MEALS; x++)
    {
        printf("Calories at meal %d: ", x + 1);
        scanf("%d", &calories[x]);
        total = total + calories[x];
    }
    printf("You had a total of %d calories today. \n", total);

    return (0);
}