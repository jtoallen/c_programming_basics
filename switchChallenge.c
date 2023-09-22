#include <stdio.h>

int main()
{
    int a;
    printf("Please choose 1, 2, or 3: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1: /* constant-expression */
        puts("Red");
        break;

    case 2: /* constant-expression */
        puts("Green");
        break;

    case 3: /* constant-expression */
        puts("Blue");
        break;

    default:
        puts("Invalid choice");
    }

    return 0;
}