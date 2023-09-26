#include <stdio.h>

/*
This program demonstrates that the final character in a C lanaguage string
must use terminate with the NULL Character
*/
int main()
{
    char hello[] = "Greetings, human! \n";
    int n = 0;

    while (hello[n] != '\0')
    {
        putchar(hello[n]);
        n++;
    }

    return (0);
}