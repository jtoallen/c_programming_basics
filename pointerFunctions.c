#include <stdio.h>
#include <string.h>
#include <ctype.h>

// void minus10(int *v);

// int main()
// {
//     int value = 100;
//     printf("Value is equal to %d\n", value);
//     minus10(&value);
//     printf("Value is now equal to %d\n", value);

//     return (0);
// }

// void minus10(int *v)
// {
//     *v = *v - 10; //the * means the pointer val is referenced and changed
// }

// char *longer(char *s1, char *s2);

// int main()
// {
//     char string1[] = "Constantinople";
//     char string2[] = "Byzantine";
//     char *result;

//     result = longer(string1, string2);
//     printf("The longer string is %s\n", result);

//     return (0);
// }

// char *longer(char *s1, char *s2)
// //this function returns a character pointer
// //returns the address as a value
// {
//     int len1, len2;

//     len1 = strlen(s1);
//     len2 = strlen(s2);

//     if (len1 > len2)
//         return (s1);
//     else
//         return (s2);
// }

// void shouting(char *input);

// int main()
// {
//     char string[64];

//     printf("Type some text: ");
//     fgets(string, 64, stdin);
//     printf("You typed: \n%s\n", string);
//     shouting(string);
//     printf("Here is a shouting version of your string: \n%s\n", string);

//     return (0);
// }

// void shouting(char *input)
// {
//     while (*input)
//     {
//         *input = toupper(*input);
//         input++;
//     }
// }

char *encrypt(char *input);

int main()
{
    char *instructions = "Deliver the package to Berlin";

    printf("You secret instructions are: \n%s\n", encrypt(instructions));

    return (0);
}

char *encrypt(char *input)
{
    static char output[64];
    int x = 0;
    int i;

    while (*input)
    {
        if (isalpha(*input))
            output[x] = *input + 1;
        else
            output[x] = *input;

        x++;
        input++;
    }
    /*
    The next two lines cast to lower case; 
    */
    // for (i = 0; i <= strlen(output); i++)
    //     output[i] = tolower(output[i]);

    return (output);
}
