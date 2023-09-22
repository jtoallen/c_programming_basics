#include <stdio.h>
#include <stdlib.h>

/*
Function1 
*/
// #define SIZE 1024

// int main()
// {
//     char *sto;
//     sto = malloc(sizeof(char) * SIZE);
//     if (sto == NULL)
//     {
//         puts("Memory error");
//         return (1);
//     }
//     else
//     {
//         printf("%d bytes of memory was allocated at %p\n", SIZE, sto);
//     }
//     return (0);
// }

/*
Function 2
*/

int main()
{
    int *scores;
    int x;

    scores = malloc(sizeof(int) * 4);

    if (scores == NULL)
    {
        puts("Unable to allocate memory");
        return (1);
    }
    *(scores + 0) = 100;
    *(scores + 1) = 97;
    *(scores + 2) = 105;
    *(scores + 3) = 110;

    for (x = 0; x < 4; x++)
        printf("Score %d: %d\n", x + 1, *(scores + x));

    return (0);
}