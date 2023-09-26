#include <stdio.h>

// int main()
// {
//     int grid[3][3];
//     int row, col;

//     /*
//     must initialize the array otherwise the behavior is unpredictable
//     the following for-loop initializes the array
//     */
//     for (row = 0; row < 3; row++)
//         for (col = 0; col < 3; col++)
//             grid[row][col] = 0;
//     grid[1][1] = 1; //places 1 in center of grid for tic-tac-toe

//     /*
//     displays the grid
//     */
//     for (row = 0; row < 3; row++)
//     {
//         for (col = 0; col < 3; col++)
//             printf("%d ", grid[row][col]);
//         putchar('\n');
//     }
//     return (0);
// }

// int main()
// {
//     char names[4][5] =
//         {"Ant", "Bee", "Cat", "Duck"};
//     //the [col] length must be length of longest string plus 1.
//     //since Duck is longest with 4 chars then length for col = 5

//     int x;

//     //names[2][2] = 'r'; //this would change Cat to Car. this is typical indexing
//     //into an array and then inside the string.

//     for (x = 0; x < 4; x++)
//         printf("%s\n", names[x]);

//     return (0);
// }

//Challenge Exercise

int main()
{
    char names[5][9] = {
        "Ant",
        "Bee",
        "Cat",
        "Duck",
        "Elephant"};
    int x;

    for (x = 0; x < 5; x++)
        printf("%s\n", names[x]);

    return (0);
}
