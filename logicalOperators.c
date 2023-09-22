#include <stdio.h>
#include <ctype.h>

/*
Operators: 
&&  AND
|| OR
! NOT
 ALl non-zero values are TRUE except for zero (0) which is FALSE
*/

int iscaps(int ch);

int main()
{
    int c;
    do
    {
        c = getchar();
        if (iscaps(c))
        {
            putchar(c);
        }
    } while (c != '\n');
    return 0;
}

//uses OR logic
// int iscaps(int ch)
// {
//     if (ch < 'A' || ch > 'Z') //only uppercase characters are TRUE
//     //values of uppercase is 65 to 90
//     //values of lowercase is 97 to 122
//     {
//         return (0);
//     }
//     return (1);
// }

//uses AND Logic
// int iscaps(int ch)
// {
//     if (ch >= 'A' && ch <= 'Z') //only uppercase characters are TRUE
//     //values of uppercase is 65 to 90
//     //values of lowercase is 97 to 122
//     {
//         return (1);
//     }
//     return (0);
// }