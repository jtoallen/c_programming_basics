#include <stdio.h>

int main()
{
    /*
    int c;
    printf("Type a letter: ");
    c = getchar();
    printf("You typed the letter '%c'.\n", c);

    //alternatively the above line could be like this:
    printf("You typed '");
    putchar(c);
    printf("'.\n");

    //3rd option is this:
    printf("The char you typed is ");
    putchar(c);
    putchar('\n');
*/

    /*   
    int a, b;

//This will only take 2 characters and no more. if you keep typing, then
//subsequent characters are ignored. 
    printf("Type two letters: ");
    a = getchar();
    b = getchar();
    printf("You typed ");
    putchar(a);
    printf(" and ");
    putchar(b);
    printf("\n");
*/

    //This waits until all getchar() is read before executing putchar()
    //statements.  stream output is buffered, pc waits until buffer is full
    //character i/o is stream oriented.
    int a, b, c;
    printf("Type three letters: ");
    a = getchar();
    putchar(a);
    b = getchar();
    putchar(b);
    c = getchar();
    putchar(c);

    return (0);
}