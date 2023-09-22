#include <stdio.h>
#include <string.h>

// int main()
// {
//     char string[] = "Test the length of this string";
//     int len;

//     len = strlen(string); //string length function
//     printf("The following string: \n");
//     puts(string); //outputs long string of ch
//     printf("is %d characters long. \n", len);

//     return (0);
// }

// int main()
// {
//     char input[64]; //holds 63 characters.
//     int len;

//     printf("Type instructions: ");
//     fgets(input, 64, stdin); //fetches input stores it in input buffer,
//     //stdin is standard input.
//     len = strlen(input); //calculates the len of the string but does not count
//     //the null character
//     printf("You type %d characters of instructions \n", len);

//     return (0);
// }

////Example of String Concatenation
// int main()
// {
//     char first[] = "I would like to concatenate the first str ";
//     char second[] = "with the second string \n";
//     char buffer[72]; //var used to append second str to first str

//     strcpy(buffer, first);  //copies first str var into buffer var
//     strcat(buffer, second); //concats second str var with first in the buffer var
//     puts(buffer);

//     return (0);
// }

int main()
{
    char first[64];
    char second[64];
    char buffer[128];

    printf("Enter your favorite city: ");
    fgets(first, 64, stdin);
    printf("Enter your favorite season: ");
    fgets(second, 64, stdin);

    strcpy(buffer, first);
    strcat(buffer, second);

    printf("You love the %s\n", buffer);
}