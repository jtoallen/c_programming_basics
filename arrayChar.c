#include <stdio.h>

int main()
{
    char text[] = "I am a string";
    puts(text);

    return (0);
}

/*
if we could not use double quotes for a string in C, then we would have to
write out all the letters as separate chars like this below

AND must END with NULL CHARACTER
*/

// int main()
// {
//     char text[] =
//         {
//             'I', ' ', 'a', 'm', ' ', 'a', ' ', 's', 't', 'r', '\0'
//             // remember all char arrays must end with null character
//             //  '\0'
//             // Other C does not know when the char array is closed

//         };

//     puts(text);
//     return (0);
// }