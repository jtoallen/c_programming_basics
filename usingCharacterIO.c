// header
#include <stdio.h>

/*
These functions actually work with with INT and not chars
 -function to read input - getchar()
 -function to send output - putchar()

 Note: getchar() and putchar() are stream oriented
 Stream output is also buffered, so the program will wait until it has input for
 all getchar() functions BEFORE it calls putchar() to print to the screen
 */

int main()
{
    // int c;

    // // use putchar() to display the results
    // printf("Type a letter: ");
    // c = getchar();
    // // %c placeholder to display the character and NOT decimal code value
    // printf("You typed %c\n");
    // // this makes the variable display right away
    // putchar(c);
    // // must enclose putchar in SINGLE QUOTES because it expects a char.
    // putchar('\n');

    // Use printf()  to display the results
    // printf("Type a letter: ");
    // c = getchar();
    // %c placeholder to display the character and NOT decimal code value
    // printf("You typed '%c' \n", c);

    // int a, b;

    // printf("Type two letters: ");
    // a = getchar();
    // b = getchar();
    // printf("You typed: ' ");
    // putchar(a);
    // printf(" ' and ' ");
    // putchar(b);
    // printf("'. \n");

    int a, b, c;

    printf("Type three letters: ");
    a = getchar();
    putchar(a);
    b = getchar();
    putchar(b);
    c = getchar();
    putchar(c);
    printf("\n");

    return 0;
}