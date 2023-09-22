#include <stdio.h>
#include <ctype.h> //majority of files are testing fn's. boolean functions

// int main()
// {
//     int ch = 'a'; //using an int for the ch 'a' because toupper and tolower
//                   //functions use integer values to execute the fn.
//                   //if you are reading char from a file
//                   //use INT because it will help catch errors.

//     printf("Original %c\n", ch);
//     printf("tolower case %c\n", tolower(ch)); //does not change actual value of ch
//     printf("toupper case %c\n", toupper(ch));
//     printf("Original %c\n", ch);

//     return (0);
// }

// int main()
// {
//     char ch = 'a'; //however the functions also work
//     //with a char type 'a'.

//     printf("Original %c\n", ch);
//     printf("tolower case %c\n", tolower(ch)); //does not change actual value of ch
//     printf("toupper case %c\n", toupper(ch));
//     printf("Original %c\n", ch);

//     return (0);
// }

// int main()
// {
//     int ch = 'a';
//     /*
//     character variables are small integers in memory but are displayed back
//     as characters. therefore you can also use %d instead of %c placeholders
//     but it will display character's code value
//     */
//     printf("Original %d\n", ch);
//     printf("tolower case %d\n", tolower(ch)); //does not change actual value of ch
//     printf("toupper case %d\n", toupper(ch));
//     printf("Original %d\n", ch);

//     return (0);
// }

// int main()
// {
//     int c;

//     do
//     {
//         c = getchar();
//         c = toupper(c);
//         putchar(c);
//     } while (c != '\n');
//     {
//         return (0);
//     }
//     return (0);
// }

// int main()
// {
//     int acter;

//     do
//     {
//         acter = getchar();
//         if (isalpha(acter))
//         {
//             putchar(acter);
//         }

//     } while (acter != '\n');
//     {
//         return (0);
//     }
//     return (0);
// }

int main()
{
    int acter;

    do
    {
        acter = getchar();
        if (isdigit(acter))
        {
            putchar(acter);
        }

    } while (acter != '\n');
    {
        return (0);
    }
    return (0);
}