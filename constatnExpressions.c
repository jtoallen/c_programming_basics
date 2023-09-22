#include <stdio.h>

#define INPUT_MAX 64

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

//     //these two lines would be invalid because const val can't change
//     // x = 10;
//     // printf("%d squared is %d\n", x, x * x);

//     return (0);
// }
