#include <stdio.h>

/*
Function 1
 */

// int main()
// {
//     char *months[12] = {
//         "January", "February", "March", "April", "May", "June", "July",
//         "August", "September", "October", "November", "December"};

//     int x;

//     //this will display the val of the pointer
//     for (x = 0; x < 12; x++)
//         printf("%s\n", months[x]);

//     //this will display the memory address of the pointer

//     for (x = 0; x < 12; x++)
//         printf("%p\n", months[x]);

//     return (0);
// }

/*
Function 2
*/

// int main()
// {
//     char *presidents[5] =
//         {
//             "Washington",
//             "Adams",
//             "Jefferson",
//             "Madison",
//             "Monroe"};

//     int x;
//     char *pointer;

//     for (x = 0; x < 5; x++)
//     {
//         pointer = presidents[x];
//         while (*pointer != '\0')
//         {
//             putchar(*pointer);
//             pointer++;
//         }
//         putchar('\n'); //puts each name on a new line
//     }

//     return (0);
// }

/*
Function 3 
*/

int main()
{
    char *presidents[5] =
        {
            "Washington",
            "Adams",
            "Jefferson",
            "Madison",
            "Monroe"};

    int x;
    char *pointer;

    for (x = 0; x < 5; x++)
    {
        pointer = *(presidents + x); // uses memory address stored in
        //the presidents variable.
        //uses pointer notation to increment array
        //and get the next string in the array.

        while (*pointer) //since '\0' evaluates to false loop can be written
        //this way as well as the way in function 2.
        {
            putchar(*pointer);
            pointer++;
        }
        putchar('\n'); //puts each name on a new line
    }

    return (0);
}