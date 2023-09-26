#include <stdio.h>

#define INPUT_MAX 64

/*
do NOT use the = sign when assigning constant variables
or constant expressions and do NOT end with a semi colon
The compile will handle this for you.
The constant must be assigned when the CONST is created

The constant var is only accessible within the function in which it is defined

The constant expression can be accessed anywhere in the program

String expressions must be expressed within double quotes "Jason Allen"
*/

int main()
{
    char input[INPUT_MAX];

    printf("These are the instructions: ");
    fgets(input, INPUT_MAX, stdin);
    puts("Thenk you! Here are your instructions: ");
    puts(input);

    return 0;
}

// int main()
// {
//     const int x = 5;

//     printf("%d squared is %d\n", x, x * x);

//     //these two lines would be invalid because const value CANNOT be changed
//     // x = 10;
//     // printf("%d squared is %d\n", x, x * x);

//     return (0);
// }
