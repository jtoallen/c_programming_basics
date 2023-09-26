#include <stdio.h>

int main()
{
    char a, b, c, *p;

    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("The value of A is %c, the value of B is %c and val of C is %c\n",
           a, b, c);

    return (0);
}