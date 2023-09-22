#include <stdio.h>

int main()
{
    char alpha;
    int numeric;

    for (alpha = 'A'; alpha < 'K'; alpha++)
    {
        for (numeric = 0; numeric < 10; numeric++)
        {
            printf("%c -%d \t", alpha, numeric); // backslash t is a tab \t
        }
        putchar('\n');
    }
    return (0);
}